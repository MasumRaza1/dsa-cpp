#include<iostream>
using namespace std;

class Node{
public:
	int data;
	Node* next;

	Node(int data)
	{
		this -> data = data;
		this -> next = NULL;
	}
	~Node(){
		int value = this-> data;
		// memory free

		if(this -> next !=NULL)
		{
			delete next;
			this -> next = NULL;
		}
		cout<<"Memory is free value is : " <<value<<endl;
	}
};

void insertAtHead(Node* &head, int data)
{
	Node* temp = new Node(data);
	temp -> next = head;
	head = temp;
}
void insertAtTail(Node* &tail,int data)
{
	Node* temp = new Node(data);
	tail->next = temp;
	tail = temp;


}


void insertAtMiddle(Node* &head, Node* &tail, int position, int data)
{
	// insert at start (update head)
	if(position == 1)
	{
		insertAtHead(head, data);
		return;
	}

	Node*temp = head;
	int count = 1;

	while(count < position - 1)
	{
		temp = temp -> next;
		count ++;
	}

	Node* nodetoInsert = new Node(data);
	nodetoInsert -> next = temp -> next;
	temp -> next = nodetoInsert;

	// insert at last (update tail)
	if(temp -> next == NULL)
	{
		insertAtHead(tail, data);
		return;
	}

}
void print(Node* &head, Node* &tail)
{
	Node* temp = head;

	while(temp != NULL)
	{
		cout<<temp->data<<" ";
		temp = temp -> next;
	}
	cout<<endl;
  cout<<"This is Head -> "<<head->data<<endl;
   cout<<"This is Tail -> "<<tail->data<<endl;
}

void deleteNode(Node* &head, int position)
{
	// start node delete
	if(position == 1)
	{
     Node* temp = head;
     head = head->next;
     temp->next = NULL;
     delete temp;
	}
	// delete middle and last
	else{
     Node* curr = head;
     Node* pre = NULL;
    
     int count = 1;

     while(count < position)
     {
     	pre=curr;
     	curr = curr -> next;
     	count++;
     }
     pre->next = curr -> next;
     curr->next = NULL;
     	delete curr;
	}

}

int main(){
  Node* head;
  Node* tail;
  Node* node1 = new Node(10);
  head = node1;
  tail = node1;

  insertAtHead(head,20);
   insertAtHead(head,30);
    insertAtHead(head,40);
    insertAtTail(tail, 5);
    insertAtMiddle(head,tail,1,99);
    insertAtMiddle(head,tail,7,100);
  print(head, tail);
  cout<<endl;
  deleteNode(head,7);
  print(head,tail);


	return 0;
}
