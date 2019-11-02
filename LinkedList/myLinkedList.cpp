#include <iostream>
#include "Node.cpp"
using namespace std;
/*class Node{
	private:
		int data;
		Node* next;
	public:
		Node(int d,Node* next){
			data=d;
			this->next=next;
		}
		int get_data(){
			return data;
		}
		Node* get_next_node(){
			return next;
		}
};*/
class myLinkedList{
	private:
		Node* head;
	public:
		myLinkedList(Node* head){
			this->head=head;
		}
		void traverse();
		//void insert_at_beg(int val);
		//void insert_at_end(int val);
		//void insert_at_loc(int loc);
		//void insert_after_element(int val);
};
void myLinkedList::traverse(){
	while(head!=NULL){
		cout<<head->get_data()<<endl;
		head=head->get_next_node();
	}
}
int main(void){
	Node* node3= new Node(3,NULL);
	Node* node2=new Node(2,node3);
	Node* head=new Node(1,node2);
	myLinkedList* linked_list=new myLinkedList(head);
	linked_list->traverse();
	return 0;
}
