#include <bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};
void printSibling(Node *);
int main()
{
  int t;
  scanf("%d\n", &t);
  while (t--)
  {
     map<int, Node*> m;
     int n;
     scanf("%d",&n);
     struct Node *root = NULL;
     struct Node *child;
     while (n--)
     {
        Node *parent;
        char lr;
        int n1, n2;
        scanf("%d %d %c", &n1, &n2, &lr);
        if (m.find(n1) == m.end())
        {
           parent = new Node(n1);
           m[n1] = parent;
           if (root == NULL)
             root = parent;
        }
        else
           parent = m[n1];
        child = new Node(n2);
        if (lr == 'L')
          parent->left = child;
        else
          parent->right = child;
        m[n2]  = child;
     }
   printSibling(root);
   cout<<endl;
  }
  return 0;
}
#include<set>
#include<algorithm>
#include<queue>
void printSibling(Node* node){
  if(node==NULL)
    return;
  
  queue<Node*>q;
  q.push(node);
  vector<int>vect;
  Node* temp;
  while(q.empty()==false){
      
          temp=q.front();
          q.pop();
          if(temp->right==NULL && temp->left!=NULL){
            vect.push_back(temp->left->data);
          } 
          if(temp->left==NULL && temp->right!=NULL){
              vect.push_back(temp->right->data);
          }
          
          if(temp->right)
           q.push(temp->right);
          if(temp->left)
           q.push(temp->left);
  }
  
  if(vect.size()==0){
      cout<<"-1";
      return;
  }
  sort(vect.begin(),vect.end());
  vector<int>::iterator itr;
  for(itr=vect.begin();itr!=vect.end();itr++){
      cout<<*itr<<" ";
  }
}
