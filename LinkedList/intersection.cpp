// { Driver Code Starts
/*
Given two lists sorted in increasing order, create and return a new list representing the intersection of the two lists. The new list should be made with its own memory — the original lists should not be changed.

For example, let the first linked list be 1->2->3->4->6 and second linked list be 2->4->6->8, then your function should create and return a third list as 2->4->6.
*/
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int val;
    struct Node *next;
    
    Node(int data){
        val = data;
        next = NULL;
    }
    
};

void push(struct Node **root,int data)
{
    Node *newnode=new Node(data);
    struct Node *prev;
    prev=*root;
    
    if(*root==NULL)
    {
        *root=newnode;
        return;
    }
    while(prev->next!=NULL)
        prev=prev->next;

    prev->next=newnode;
}

void print(struct Node *ptr)
{
    if(ptr==NULL)
    {
        cout<<"NO"<<endl;
        return;
    }
    while(ptr!=NULL)
    {
        cout<<ptr->val<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}
void intersection(struct Node **head1,struct Node **head2,struct Node **head3);

int main()
{
    struct Node *head1=NULL;
    struct Node *head2=NULL;
    struct Node *head3=NULL;
    int t,n1,n2;
    cin>>t;
    while(t--)
    {
        struct Node *head1=NULL;
        struct Node *head2=NULL;
        struct Node *head3=NULL;
        cin>>n1>>n2;
        int k;
        for(int i=0;i<n1;i++)
        {
            cin>>k;
    
            push(&head1,k);
        }
    
        for(int i=0;i<n2;i++)
        {
            cin>>k;
            push(&head2,k);
             
        }
           
        intersection(&head1,&head2,&head3);
        print(head3);
      
    }
}
// } Driver Code Ends
/* The structure of the Linked list Node is as follows:

struct Node
{
    int val;
    struct Node *next;
    
    Node(int data){
        val = data;
        next = NULL;
    }
    
}; 
*/
Node* sortedIntersect(Node* head1,Node* head2){
    if(head1==NULL || head2==NULL)
     return NULL;
    
    if(head1->val<head2->val)
    return sortedIntersect(head1->next,head2);
    
    if(head1->val>head2->val)
    return sortedIntersect(head1,head2->next);
    
    Node* temp=new Node(head1->val);
    temp->next=sortedIntersect(head1->next,head2->next);
    return temp;
}
void intersection(Node **head1, Node **head2,Node **head3)
{
     *head3=sortedIntersect(*head1,*head2);
}

