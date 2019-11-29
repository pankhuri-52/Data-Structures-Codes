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
void inorder_traverse(Node* root,vector<int>&arr){
        if(root==NULL)
                return;
        inorder_traverse(root->next[0],arr);
        arr.push_back(root->data);
        inorder_traverse(root->next[1],arr);
}
void convert_max_heap(Node* root,vector<int>arr,int *i){
        if(root==NULL)
                return;
        root->data=arr[--*i];
        convert_max_heap(root->next[1],arr,i);
        convert_max_heap(root->next[0],arr,i);
}
void max_heap_util(Node* root,int n){
        vector<int>arr;
        int i=n;
        inorder_traverse(root,arr);
        convert_max_heap(root,arr,&i);
}
void print_postorder(Node* root){
        if(root==NULL)
                return;
        print_postorder(root->next[0]);
        print_postorder(root->next[1]);
        cout<<root->data<<" ";
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
        max_heap_util(root,argc-1);
        print_postorder(root);
        return 0;
}
