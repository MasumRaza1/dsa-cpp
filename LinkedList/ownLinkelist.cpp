#include<iostream>
using namespace std;

class Node{
public:
	int data;
	Node* next;

	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
	~Node()
	{
		int value = this -> data;
		if(this -> next != NULL)
		{
			delete next;
			this -> next = NULL;
		}
		cout<<"Memory is free : "<<value<<endl;
	}
};
void insertAtHead(Node* &head, int data)
{
	Node* temp = new Node(data);
     temp -> next = head;
     head = temp;
   }
   void insertAtTail(Node* &tail, int data)
   {
   	Node* temp = new Node(data);
    tail -> next = 	temp;
    tail = temp;
   }
   void insertAtMiddle(Node* &head, Node* &tail, int position, int data)
   {
   	// head (update)
   if(position == 1)
	{
		insertAtHead(head, data);
		return;
	}
   	Node* temp = head;
   	int count = 1;

   	while(count < position-1)
   	{
   		temp = temp -> next;
   		count++;
   	}
   		Node* nodetoInsert = new Node(data);
   		nodetoInsert -> next = temp -> next;
        temp -> next = nodetoInsert;

        // Update tail
        if(tail -> next != NULL)
        {
        	insertAtTail(tail,data);
        	return;
        }
   }

   void deleteNode(Node* &head, int position)
   {
   	if(position == 1)
   	{
   		Node*temp = head;
   		head = head -> next;
   		temp -> next = NULL;
   		delete temp;

   	}
   	else{
   		Node* curr = head;
   		Node* pre = NULL;

   		int count = 1;

   		while(count < position)
   		{
   			pre = curr;
   			curr = curr -> next;
   			count++;
   		}
   		pre -> next = curr -> next;
   		curr -> next = NULL;
   		delete curr;
		
   	}
   	   

   }

void print(Node* &head)
{
	Node* temp = head;
	while(temp != NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;	
	}
}

int main()
{
	Node* head;
	Node* tail;
	Node* node1 = new Node(10);
	head = node1;
	tail = node1;


    insertAtHead(head,40);
     insertAtHead(head,11);
     insertAtTail(tail, 100);
     insertAtTail(tail, 98);
      insertAtMiddle(head,tail,1,77);
      insertAtMiddle(head,tail,7,77);


	print(head);
	cout<<endl;
	 // deleteNode(head,7);
	 print(head);


    return 0;
}