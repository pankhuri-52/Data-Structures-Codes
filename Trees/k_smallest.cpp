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
void k_smallest(int arr[],int k,int index){
   for(int i=0;i<k;i++){
       for(int j=i+1;j<k;j++){
           if(arr[i]>arr[j]){
               int temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
           }
       }
   }
   int sum=0;
   for(int i=0;i<index;i++){
	   if(arr[i]==-1){
	   	++index;
		continue;
	   }
       sum=sum+arr[i];
   }
   cout<<sum;
}
int main(int argc,const char *argv[]){
    int index=atoi(argv[1]);
    int arr[argc];
    int k=0;
    for(int i=2;i<argc;i++){
        arr[k++]=atoi(argv[i]);
    }
    Node* root=construct_tree(root,arr,0,k);
    k_smallest(arr,k,index);
    return 0;
}
