#include <iostream>
#include <string.h>
using namespace std;
class Node{
	public:
		string data;
		Node* next;
		Node* prev;
};
class Abby_Stack{
	public:
		Node* top;
		Node* mid;
		int size;
	public:
		bool push(string new_data){
			Node* new_node=new Node;
		       new_node->data=new_data;
		       new_node->next=top;
		       top=new_node;
		       size++;
		       return true;
		}
		string pop(){
			 if(top==NULL)
                           return "$";
                         string head_data=top->data;
                         top=top->next;
			 size--;
                         return head_data;
		}
		string find_middle(){
                    int low=0;
		    int high=size-1;
		    int count=0;
		    Node* temp=top;
		    int middle_element=low+(high-low)/2;
		    Node* middle_node=NULL;
		    while(count!=middle_element){
			    count++;
			    temp=temp->next;
		    }
		    middle_node=temp;
                    //cout<<"The middle element is "<<middle_node->data<<endl;
		    return middle_node->data;
		}
		/*void delete_middle(string mid){
			mid->prev->next=mid->next;
			free(mid);
		}*/
		void print_stack(){
		while(top!=NULL){
			cout<<top->data<<" ";
			top=top->next;
	}
}
};
int main(int argc,const char *argv[]){
   Abby_Stack *st=new Abby_Stack();
   for(int i=argc-1;i>=1;i--)
   st->push(argv[i]);
   //st->print_stack();
    string mid=st->find_middle();
    cout<<"The middle element in the stack is "<<mid<<endl;
    st->print_stack();
   return 0;
}
