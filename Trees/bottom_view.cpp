/ { Driver Code Starts
// C++ Program to print Bottom View of Binary Tree
#include<bits/stdc++.h>
using namespace std;

// Tree node class
struct Node
{
    int data; //data of the node
    Node *left, *right; //left and right references

    // Constructor of tree node
    Node(int key)
    {
        data = key;
        left = right = NULL;
    }
};

// Method that prints the bottom view.
void bottomView(Node *root);

Node* make_tree()
{
	int n;
	cin>>n;
	
    
	Node* head=NULL;
	queue <Node*> q;

	for( ; n>0 ; n-- )
	{
		int a,b;
		char c;
		cin>> a >> b >> c;

        if(!head)
		{
			head = new Node(a);
			q.push(head);
		}

        Node* pick = q.front();
		q.pop();

		if(c == 'L')
		{
			pick->left = new Node(b);
			q.push( pick->left );
		}
		
		n--;
		if(!n) break;
		
		cin>> a >> b >> c;
		
		if(c == 'R')
		{
			pick->right = new Node(b);
			q.push( pick->right );
		}
	}
	return head;
}

/* Driver program to test size function*/
int main()
{
  int t;
  struct Node *child;
  scanf("%d\n", &t);
  while (t--)
  {
     
     Node* root = make_tree();
     bottomView(root);
     cout << endl;
  }
  return 0;
}

// } Driver Code Ends
/* Tree node class

struct Node
{
    int data; //data of the node
    Node *left, *right; //left and right references

    // Constructor of tree node
    Node(int key)
    {
        data = key;
        left = right = NULL;
    }
}; */

// Method that prints the bottom view.
void bottomView(Node *root)
{
   if(root==NULL)
     return;
     
   queue<pair<Node*,int>>q;
   pair<Node*,int>p;
   p.first=root;;
   p.second=0;
   q.push(p);
   map<int,int>m;
   while(q.empty()==false){
       pair<Node*,int> l=q.front();
       q.pop();
       Node* temp=l.first;
       int hd=l.second;
       m[hd]=temp->data;
       
       if(temp->left){
           pair<Node*,int> k;
           k.first=temp->left;
           k.second=hd-1;
           q.push(k);
       }
       
       if(temp->right){
           pair<Node*,int>k;
           k.first=temp->right;
           k.second=hd+1;
           q.push(k);
       }
       
   }
   
   map<int,int>::iterator itr;
   for(itr=m.begin();itr!=m.end();itr++){
       cout<<itr->second<<" ";
   }
}


