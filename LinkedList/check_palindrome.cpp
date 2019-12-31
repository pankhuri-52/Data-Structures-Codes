//Code by Shubham Joshi
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    string data;
    Node* next;
    
    Node(string x){
        data = x;
        next = NULL;
    }
};
Node *newNode(string str)
{
    Node *new_node = new Node(str);
    new_node->next = NULL;
    return new_node;
}
bool compute(struct Node* root);
void print(Node *root)
{
    Node *temp = root;
    
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
                struct Node *temp = head;
		
		for(int i=0;i<K;i++){
		string str="";
		cin>>str;
			if(head==NULL)
			head=temp=new Node(str);
			else
			{
				temp->next = new Node(str);
				temp=temp->next;
			}
		}
		if(compute(head))
			cout<<"True"<<endl;
		else 
			cout<<"False"<<endl;
	}
	return 0;
}
/*This is a function problem.You only need to complete the function given below*/
/*
The structure of linked list is the following
struct Node
{
    string data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
string reverse(string s){
    char char_array[s.length()+1];
    strcpy(char_array, s.c_str());
    string end="";
    for(int i=s.length()-1;i>=0;i--){
        end=end+char_array[i];
    }
    return end;
}
bool compute(Node* root)
{
    string str="";
    Node* temp=root;
    while(temp!=NULL){
        str=str+temp->data;
        temp=temp->next;
    }
    string start=str;
    string end=reverse(str);
    if(start==end)
    return true;
    else
    return false;
}  

