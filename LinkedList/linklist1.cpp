#include<iostream>
using namespace std;

class Node {
public:
	int data;
	Node* next;

	Node(int data)
	{
		this -> data = data;
		this -> next = NULL;
	}
};

int main(){
  Node* Head;
  Node* node1 = new Node(10);
  Head = node1;
  Node* node2 = new Node(20);
  node1 -> next = node2;
   Node* node3 = new Node(30);
   node2->next = node3;
  Node*t = Head;

  while(t != NULL)
  {
  	cout<<t->data<<endl;

  	t= t->next;
  }
 

	return 0;
}
