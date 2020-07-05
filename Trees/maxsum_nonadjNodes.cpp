#include<bits/stdc++.h> 
using namespace std; 

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}

// Function to Build Tree
Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {
                
            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}

int getMaxSum(Node* root);

 // } Driver Code Ends


//User function Template for C++

//Node Structure
/*struct Node
{
	int key;
	Node *left, *right;
};*/

//This function returns the maximum sum of non-adjacent nodes.
int sumOfGrandChildren(Node* node); 
int getMaxSum(Node* node); 
int getMaxSumUtil(Node* node, map<Node*, int>& mp); 
int sumOfGrandChildren(Node* node,map<Node*,int>&m){
    int sum=0;
    if(node->left){
        sum += getMaxSumUtil(node->left->left,m) + getMaxSumUtil(node->left->right,m);
    }
    if(node->right){
        sum += getMaxSumUtil(node->right->left,m) + getMaxSumUtil(node->right->right,m);
    }
    return sum;
}
int getMaxSumUtil(Node* node,map<Node*,int>& m){
    if(node==NULL)
     return 0;
     
    if(m.find(node)!=m.end()){
        return m[node];
    }
    
    int include = node->data+sumOfGrandChildren(node,m);
    int exclude = getMaxSumUtil(node->left,m)+getMaxSumUtil(node->right,m);
    
    m[node]=max(include,exclude);
    return m[node];
}
int getMaxSum(Node *root) 
{
    if(root==NULL)
        return 0;
    map <struct Node*,int> m;
    return getMaxSumUtil(root,m);
}
