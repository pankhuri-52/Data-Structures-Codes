#include <iostream>
#include <queue>
using namespace std;
int arr1[99];
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
    if(root==NULL)
    return NULL;
    
    root=new Node(arr[start]);
    if(2*start+1<end && arr[2*start+1]!=0)
      root->next[0]=construct_tree(root,arr,2*start+1,end);
    if(2*start+2<end && arr[2*start+2]!=0)
      root->next[1]=construct_tree(root,arr,2*start+2,end);
      
    return root;
}
void print_diagonal(Node* root){
    if (root == NULL) 
        return; 
        
    queue<Node*> q; 
    q.push(root); 
    q.push(NULL); 
  
    while (!q.empty()) { 
        Node* temp = q.front(); 
        q.pop(); 
        if (temp == NULL) { 
            if (q.empty()) 
                return; 
           // cout << endl; 
            q.push(NULL); 
        } 
        else { 
            while (temp) { 
                //cout << temp->data << " ";
                arr1[z++]=temp->data;
                if (temp->next[0]) 
                    q.push(temp->next[0]); 
                temp = temp->next[1]; 
            } 
        } 
    } 
} 
int main(int argc,const char *argv[]){
    int arr[argc];
    int k=0;
    for(int i=1;i<argc;i++){
        arr[k++]=atoi(argv[i]);
    }
    Node* root=construct_tree(root,arr,0,argc-1);
    print_diagonal(root);
    for(int i=0;i<z-1;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<arr1[z-1];
    return 0;
}
