#include<iostream>
using namespace std;

class Node{
public:
	int data;
	Node* next;

	//constructor
	Node(int data)
	{
		this -> data = data;
		this -> next = NULL;
	}
};

int main()
{
	Node* head;
	Node* node1 = new Node(10);
	head=node1;
	// node1=node1->next;
	Node* tem = new Node(30);
	node1->next=tem;
	node1=node1->next;
	tem = new Node(90);
	node1->next=tem;

	Node* t=head;
	while(t!=NULL){
		cout<<t->data <<" " ;
		t=t->next;
	}


	// cout<<node1 -> data<<endl;
	// cout<<node1 -> next<<enode1->next=tem;ndl;

	return 0;
}