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
Node* build_tree(Node* root,int arr[],int start,int end){
         if(start>end)
		 return NULL;
	 root=new Node(arr[start]);
	 if(2*start+1<end && arr[2*start+1]!=-1)
		 root->next[0]=build_tree(root,arr,2*start+1,end);
	 if(2*start+2<end && arr[2*start+2]!=-1)
		 root->next[1]=build_tree(root,arr,2*start+2,end);
	 return root;
        
}
void inorder(Node* root){
	if (root==NULL)
		return;
	inorder(root->next[0]);
	cout<<root->data<<" ";
	inorder(root->next[1]);
}
int main(int argc,const char *argv[]){
	int arr[argc];
	int k=0;
	for(int i=1;i<argc;i++){
		arr[k++]=atoi(argv[i]);
	}
	Node* root=build_tree(root,arr,0,argc-1);
	inorder(root);
	return 0;
}
