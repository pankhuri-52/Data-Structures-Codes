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
	if(start>end)
		return NULL;
	root=new Node(arr[start]);
	if(2*start+1<end && arr[2*start+1]!=-1)
		root->next[0]=construct_tree(root,arr,2*start+1,end);
	if(2*start+2<end && arr[2*start+2]!=-1)
		root->next[1]=construct_tree(root,arr,2*start+2,end);
	return root;
}
int leaf(Node* root){
	if (root==NULL)
		return 0;
	else if(root->next[0]==NULL && root->next[1]==NULL)
		return 1;
	else
		return leaf(root->next[0])+leaf(root->next[1]);
}
void nonleaf(Node* root,int leaf){
    if(root==NULL)
	    return;
    queue<Node*>q;
    q.push(root);
    int count1=0;
    while(q.empty()==false){
	    int count=q.size();
	    while(count>0){
		    Node* node=q.front();
		    count1++;
		    q.pop();
		    if(node->next[0]!=NULL)
			    q.push(node->next[0]);
		    if(node->next[1]!=NULL)
			    q.push(node->next[1]);
		    count--;
	    }
    }
    int non_leaf=count1-leaf;
    cout<<"Number of non-leaf Nodes"<<endl;
    cout<<non_leaf<<endl;
}
int main(int argc,const char *argv[]){
	int arr[argc];
	int k=0;
	for(int i=1;i<argc;i++){
		arr[k++]=atoi(argv[i]);
	}
	Node* root=construct_tree(root,arr,0,argc-1);
	int count=leaf(root);
	cout<<"Number of leaf nodes"<<endl;
	cout<<count<<endl;
	nonleaf(root,count);
	return 0;
}
