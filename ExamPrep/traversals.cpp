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
Node* construct_tree(Node* root,int arr[],int start,int end){
	if(start>end)
		return NULL;

	root=new Node(arr[start]);
	if(2*start+1<end && arr[2*start+1]!=-1)
           root->next[0]=construct_tree(root,arr,2*start+1,end);
	if(2*start+2<end && arr[2*start+2]!=-1)
		root->next[1]=construct_tree(root,arr,2*start+2,end);
	return root;
}
void preorder(Node* root){
	if (root==NULL)
		return;
        cout<<root->data<<" ";
	preorder(root->next[0]);
	preorder(root->next[1]);
}
void inorder(Node* root){
	if(root==NULL)
		return;

	inorder(root->next[0]);
	cout<<root->data<<" ";
	inorder(root->next[1]);
}
void postorder(Node* root){
	if(root==NULL)
		return;

	postorder(root->next[0]);
	postorder(root->next[1]);
	cout<<root->data<<" ";
}
int main(int argc,const char *argv[]){
	int arr[argc];
	int k=0;
	for(int i=1;i<argc;i++){
		arr[k++]=atoi(argv[i]);
	}
	Node* root=construct_tree(root,arr,0,argc-1);
	cout<<"Preorder Traversal"<<endl;
	preorder(root);
	cout<<endl;
	cout<<"Inorder Traversal"<<endl;
	inorder(root);
	cout<<endl;
	cout<<"Postorder Traversal"<<endl;
	postorder(root);
	return 0;
}
