#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

#define ARRAY_SIZE(arr) sizeof(arr)/sizeof(arr[0])
typedef struct Node Node;

struct Node
{
	int data;
	int lCount;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    lCount = 0;
	    left = NULL;
	    right = NULL;
	}
};
int KthSmallestElement(Node *root, int k);

Node *insert_node(Node *root, Node* node)
{
    Node *pTraverse = root;
    Node *currentParent = root;
 
    while(pTraverse)
    {
        currentParent = pTraverse;
 
        if( node->data < pTraverse->data )
        {
            pTraverse->lCount++;
            pTraverse = pTraverse->left;
        }
        else
        {
            pTraverse = pTraverse->right;
        }
    }
    if( !root )
    {
        root = node;
    }
    else if( node->data < currentParent->data )
    {
        currentParent->left = node;
    }
    else
    {
        currentParent->right = node;
    }
 
    return root;
}

Node* binary_search_tree(Node *root, int keys[], int const size)
{
    int iterator;
    Node *new_node = NULL;
 
    for(iterator = 0; iterator < size; iterator++)
    {
        new_node = new Node(keys[iterator]);
        /* insert into BST */
        root = insert_node(root, new_node);
    }
 
    return root;
}
 
 int main(void)
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
    int ele[n];
	for(int i=0;i<n;i++){
		cin>>ele[i];
	}
    int k;
	cin>>k;
    Node* root = NULL;
    root = binary_search_tree(root, ele, ARRAY_SIZE(ele));
        printf("%d\n",KthSmallestElement(root, k));
	}
    return 0;
}

//FInal thing to read
#include <climits>
int KthSmallestElement(Node* root,int *i,int k){
    if(root==NULL)
    return INT_MAX;
    
    int left=KthSmallestElement(root->left,i,k);
    if(left!=INT_MAX)
    return left;
    if(++*i==k)
    return root->data;
    return KthSmallestElement(root->right,i,k);
}
int KthSmallestElement(Node *root, int k)
{
   int i=0;
   return KthSmallestElement(root,&i,k);
}
