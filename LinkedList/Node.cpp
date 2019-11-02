class Node{
	private:
		int data;
		Node* next;
	public:
		Node(int n,Node* next){
			data=n;
			this->next=next;
		}
		int get_data(){
			return data;
		}
		Node* get_next_node(){
			return next;
		}
};
