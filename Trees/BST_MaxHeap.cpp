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
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
void convert(int arr[],int i,int n){
	int l=2*i+1;
	int r=2*i+2;
	int largest=i;
	if(l<n && arr[l]>arr[i])
		largest=l;
	if(r<n && arr[r]>arr[largest])
		largest=r;
	if(largest!=i){
		swap(&arr[i],&arr[largest]);
		convert(arr,largest,n);
	}
}
void Max_Heap(int arr[],int n){
	for(int i=(n-2)/2;i>=0;--i){
		convert(arr,i,n);
	}
}
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
        if(atoi(argv[i])!=-1)
        arr[k++]=atoi(argv[i]);
    }
    Max_Heap(arr,k);
    for(int i=1;i<k;i=i+2){
	    if(arr[i+1]<arr[i])
		    swap(&arr[i],&arr[i+1]);
    }
    for(int i=0;i<k;i++){
	    cout<<arr[i]<<" ";
    }
    cout<<endl;
    Node* root=construct_tree(root,arr,0,k);
    postorder(root);
    return 0;
}
