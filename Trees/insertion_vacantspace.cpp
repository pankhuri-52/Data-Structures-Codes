#include <iostream>
#include <string.h>
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
void print(Node* root){
	if(root==NULL)
		return;

	queue<Node*> q;
	q.push(root);

	while(q.empty()==false){
		int count=q.size();
        	while(count>0){
		Node* node=q.front();
		cout<<node->data<<" ";
		q.pop();
		if(node->next[0]!=NULL)
			q.push(root->next[0]);
		if(node->next[1]!=NULL)
			q.push(root->next[1]);
		count--;
	  }
      cout<<endl;
	}
}
void insert_node(Node* root,int new_data){
     queue<Node*> q; 
    q.push(root); 
  

    while (!q.empty()) { 
        struct Node* temp = q.front(); 
        q.pop(); 
  
        if (!temp->next[0]) { 
            temp->next[0]= new Node(new_data); 
            break; 
        } else
            q.push(temp->next[0]); 
  
        if (!temp->next[1]) { 
            temp->next[1]= new Node(new_data); 
            break; 
        } else
            q.push(temp->next[1]); 
    } 
}

Node* construct_binary(int arr[],Node* root,int i,int n){
	if(i<n){
		Node* new_node=new Node(arr[i]);
		root=new_node;
		if(arr[2*i+1]==-1)
			insert_node(root->next[0],8);
		if(arr[2*i+2]==-1)
			insert_node(root->next[1],9);
		if(arr[2*i+1]!=-1)
			root->next[0]=construct_binary(arr,root->next[0],2*i+1,n);
		if(arr[2*i+2]!=-1)
			root->next[1]=construct_binary(arr,root->next[1],2*i+2,n);
	}
	return root;
}
int main(int argc,const char *argv[]){
	int arr[argc];
	int k=0;
	for(int i=1;i<argc;i++){
		arr[k++]=atoi(argv[i]);
	}
	Node* root=construct_binary(arr,root,0,argc-1);
	print(root);
	//insert_node(root,8);
	//print(root);
	return 0;
}
