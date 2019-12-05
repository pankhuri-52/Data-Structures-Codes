#include <iostream>
#include <queue>
using namespace std;
int pp[99];
int z=0;
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
       if(2*start+1<end && arr[2*start+1]!=0)
	       root->next[0]=construct_tree(root,arr,2*start+1,end);
       if(2*start+2<end && arr[2*start+2]!=0)
	       root->next[1]=construct_tree(root,arr,2*start+2,end);
       return root;
}
void inorder(Node* root){
	if(root==NULL)
		return;
	inorder(root->next[0]);
	pp[z++]=root->data;
	inorder(root->next[1]);
}
void insertion(Node* root,int key){
	if(root==NULL)
		return;

	queue<Node*>q;
	queue<int>q1;
	int flag=0;
	q.push(root);
	while(q.empty()==false){
		int count=q.size();
		while(count>0){
			Node* node=q.front();
			q1.push(node->data);
			q.pop();
			if(node->next[0]!=NULL){
				q.push(node->next[0]);
			} else {
				if(flag==0){
					node->next[0]=new Node(key);
					q.push(node->next[0]);
					flag=1;
				}
			}
			if(node->next[1]!=NULL)
				q.push(node->next[1]);
			else{
				if(flag==0){
					node->next[1]=new Node(key);
					q.push(node->next[1]);
					flag=1;
				}
			}
			count--;
		}
	}
         int arr[99];
	 int k=0;
	while(q1.empty()==false){
             arr[k++]=q1.front();
	     q1.pop();
	}

	Node* root1=construct_tree(root1,arr,0,k-1);
	inorder(root1);
	for(int i=0;i<z-1;i++){
		cout<<pp[i]<<" ";
	}
	cout<<pp[z-1];
}
int main(int argc,const char *argv[]){
	int arr[argc];
	int key=atoi(argv[1]);
	int k=0;
	for(int i=2;i<argc;i++){
		arr[k++]=atoi(argv[i]);
	}
	Node* root=construct_tree(root,arr,0,argc-1);
	insertion(root,key);
	return 0;
}
