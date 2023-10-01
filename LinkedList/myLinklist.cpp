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

void insertAtHead(Node* &Head, int data)
{
	Node* temp = new Node(data);
	temp-> next = Head;
	Head = temp;
}
void print(Node* &Head)
{    Node* temp = Head;
	while(temp != NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
int main(){
  Node* Head;
  Node* node1 = new Node(10);
  Head = node1;

  insertAtHead(Head, 20);
  print(Head);
  

	return 0;
}
