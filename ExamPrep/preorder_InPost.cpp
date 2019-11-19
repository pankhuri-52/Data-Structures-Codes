#include <iostream>
using namespace std;
class Node{
	public:
	int data;
	Node* next[2];
	Node(int data){
		this->data=data;
		next[0]=NULL;
		next[1]=NULL;
	}
};
int search(int arr[],int start,int end,int value){
        int i;
        for(i=start;i<=end;i++){
                if(arr[i]==value)
                        break;
        }
        return i;
}

Node* build_tree(int in[],int post[],int start,int end,int* index){
	if(start>end)
		return NULL;

	Node* node=new Node(post[*index]);
	(*index)--;
	if(start==end)
		return node;
	int search_element=search(in,start,end,node->data);
	node->next[1]=build_tree(in,post,search_element+1,end,index);
	node->next[0]=build_tree(in,post,start,search_element-1,index);
	return node;
}
void preorder(Node* root){
	if(root==NULL)
		return;
	cout<<root->data<<" ";
	preorder(root->next[0]);
	preorder(root->next[1]);
}
int main(int argc,const char *argv[]){
	int in[argc];
	int k=0;
	int post[argc];
	int m=0;
	int n=atoi(argv[1]);
	for(int i=2;i<n+2;i++){
		in[k++]=atoi(argv[i]);
	}
        for(int i=n+2;i<argc;i++){
		post[m++]=atoi(argv[i]);
	}
	cout<<"Inorder Traversal"<<endl;
	for(int i=0;i<k;i++){
		cout<<in[i]<<" ";
	}
	cout<<endl;
	cout<<"PostOrder Traversal"<<endl;
	for(int i=0;i<m;i++){
		cout<<post[i]<<" ";
	}
	cout<<endl;
	int index=n-1;
        Node* root=build_tree(in,post,0,n-1,&index);
	cout<<"Preorder of the given binary tree"<<endl;
	preorder(root);
	return 0;
}
