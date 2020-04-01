// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};

void preorderTraversal(Node* root)
{
	if (!root)return;
	cout << root->data << " ";
	preorderTraversal(root->left);
	preorderTraversal(root->right); 
}

Node* constructBst(int arr[], int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)cin>>arr[i];
        Node *root = constructBst(arr, n);
        preorderTraversal(root);
        cout<<endl;
    }
	return 0; 
}

Node* constructBstUtil(Node* root,int new_data){
    if(root==NULL){
        root=new Node(new_data);
        return root;
    }
    if(new_data<=root->data)
     root->left=constructBstUtil(root->left,new_data);
    else
     root->right=constructBstUtil(root->right,new_data);
    
   return root;
}
Node* constructBst(int arr[], int n)
{
   	if(n==0)
   	return NULL;
   	
   	Node* root=NULL;
   	for(int i=0;i<n;i++){
   	    root=constructBstUtil(root,arr[i]);
   	}
   	return root;
}
