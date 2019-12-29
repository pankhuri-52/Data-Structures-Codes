#include <iostream>
#include <queue>
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
	if(root==NULL)
		return NULL;
	root=new Node(arr[start]);
	if(2*start+1<end && arr[2*start+1]!=-1)
		root->next[0]=construct_tree(root,arr,2*start+1,end);
	if(2*start+2<end && arr[2*start+2]!=-1)
		root->next[1]=construct_tree(root,arr,2*start+2,end);
	return root;
}
void delete_deepest(Node* root,Node* d_node){

	queue<Node*>q;
	q.push(root);
	Node* temp;
	while(q.empty()==false){
		temp=q.front();
		q.pop();

		if(temp==d_node){
			temp=NULL;
			delete(d_node);
			return;
		}
           if(temp->next[1]){
		if(temp->next[1]==d_node){
			temp->next[1]=NULL;
			delete(d_node);
			return;
		} else {
			q.push(temp->next[1]);
		}
	}
                
	if(temp->next[0]){
		if(temp->next[0]==d_node){
			temp->next[0]=NULL;
			delete(d_node);
			return;
		   }else {
			   q.push(temp->next[0]);
		   } 
		}
	}


}
Node* delete_node(Node* root,int key){
	if(root==NULL)
		return NULL;

	if(root->next[0]==NULL && root->next[1]==NULL){
		if(root->data==key)
			return NULL;
		else
			return root;
	}

	queue <Node*>q;
	q.push(root);
        Node* temp;
	Node* key_node=NULL;
	while(q.empty()==false){
		temp=q.front();
		q.pop();

		if(temp->data==key)
		key_node=temp;

		if(temp->next[0])
		q.push(temp->next[0]);

		if(temp->next[1])
		q.push(temp->next[1]);
	}
	if(key_node!=NULL){
		int x=temp->data;
		delete_deepest(root,temp);
		key_node->data=x;
	}
	return root;
}
void inorder(Node* root){
	if(root==NULL)
		return;
	inorder(root->next[0]);
	cout<<root->data<<" ";
	inorder(root->next[1]);
}
int main(int argc,const char *argv[]){
         int arr[argc];
	 int k=0;
	 int key=atoi(argv[1]);
	 for(int i=2;i<argc;i++){
		 arr[k++]=atoi(argv[i]);
	 }
         Node* root=construct_tree(root,arr,0,k);
	 root=delete_node(root,key);
	 inorder(root);
	 return 0;
}
