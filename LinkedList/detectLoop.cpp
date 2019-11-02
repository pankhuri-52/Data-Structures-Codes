#include <iostream>
using namespace std;
struct Node{
   int data;
   struct Node* next;
};
bool detectLoop(struct Node* head){
	Node* slow_ptr=head;
	Node* fast_ptr=head;
	while(slow_ptr && fast_ptr && fast_ptr->next){
		slow_ptr=slow_ptr->next;
		fast_ptr=fast_ptr->next->next;
		if(slow_ptr==fast_ptr)
			return true;
	}
	return false;
}
void push(struct Node **head_ref,int new_data){
	struct Node* new_node=new Node;
         new_node->data=new_data;
	 new_node->next=*head_ref;
	 (*head_ref)=new_node;
}
int main(){
	struct Node* head=NULL;
	push(&head,15);
	push(&head,5);
	push(&head,10);
	push(&head,9);
	head->next->next->next->next=head;
	if(detectLoop(head))
		cout<<"Loop detected"<<endl;
	else
		cout<<"Loop not detected"<<endl;
	return 0;
}
