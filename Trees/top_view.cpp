// { Driver Code Starts
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

void topView(struct Node *root);


int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,i,k;
        cin>>n;
        i=n;

        Node* root=NULL;
        queue <Node*> q;
        while(i>0)
        {
            int a,b;
            char c;
            cin>> a >> b >> c;
            if(!root){
                root = new Node(a);
                q.push(root);
            }
            Node* pick = q.front();
            q.pop();

            if(c == 'L'){
                pick->left = new Node(b);
                q.push( pick->left );
            }
            cin>> a >> b >> c;
            if(c == 'R'){
                pick->right = new Node(b);
                q.push( pick->right );
            }
            i-=2;
        }
        topView(root);
        cout << endl;
    }
    return 0;
}


void topView(struct Node *root)
{
    if(root==NULL)
     return;
    queue<pair<Node*,int>>q;
    
    pair<Node*,int>p;
    p.first=root;
    p.second=0;
    map<int,int>m;
    
    q.push(p);
    while(q.empty()==false){
        pair<Node*,int> l=q.front();
        q.pop();
        Node* temp=l.first;
        int hd=l.second;
        
        if(m.find(hd)==m.end())
         m[hd]=temp->data;
         
        if(temp->left){
            pair<Node*,int> k;
            k.first=temp->left;
            k.second=hd-1;
            q.push(k);
            
        }
        
        if(temp->right){
            pair<Node*,int> k;
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



