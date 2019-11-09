#include <iostream>
#include <queue>
#include <string.h>
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
Node* insert(
int main(int argc,const char *argv[]){
	Node* head=NULL;
	head=insert(head,atoi(argv[1]);
	for(int i=2;i<argc;i++){
	  insert(head,atoi(argv[i]);
	}
	inorder(head);
        return 0;
}
