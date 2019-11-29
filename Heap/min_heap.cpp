#include <iostream>
#include <vector>
using namespace std;
class Node{
        public:
                int data;
                Node* next[2];
                Node(int data){
                        this->data=data;
                        next[0]=next[1]=NULL;
                }
};
void inorder(Node* root,vector<int>&arr){
        if(root==NULL)
                return;
        inorder(root->next[0],arr);
        arr.push_back(root->data);
	//cout<<root->data<<" ";
        inorder(root->next[1],arr);
}
void convert_min_heap(Node* root,vector<int>arr,int *i){
        if(root==NULL)
                return;
        root->data=arr[++*i];
        convert_min_heap(root->next[0],arr,i);
        convert_min_heap(root->next[1],arr,i);
}
void min_heap_util(Node* root){
        vector<int>arr;
        int i=-1;
        inorder(root,arr);
        convert_min_heap(root,arr,&i);
}
void preorder(Node* root){
        if(root==NULL)
                return;
	cout<<root->data<<" ";
        preorder(root->next[0]);
        preorder(root->next[1]);
}
Node* insert(Node* root,int value){
        if(root==NULL)
                return new Node(value);
        if(root->data>value)
                root->next[0]=insert(root->next[0],value);
        if(root->data<value)
                root->next[1]=insert(root->next[1],value);
        return root;
}
int main(int argc,const char* argv[]){
        Node* root=NULL;
        root=insert(root,atoi(argv[1]));
        for(int i=2;i<argc;i++)
                root=insert(root,atoi(argv[i]));
        min_heap_util(root);
	cout<<"After preorder traversal"<<endl;
        preorder(root);
        return 0;
}
