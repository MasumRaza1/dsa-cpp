#include<iostream>
using namespace std;

class Node{
	public:
	int data;
	Node* next;
	Node* pre;

	Node(int data)
	{
		this->data = data;
		this->next = NULL;
		this->pre = NULL;
	}
};

void print(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
    	cout<<temp->data<<" ";
    	temp = temp->next;
    }
    cout<<endl;
}

void insertAtHead(Node* &head,int data)
{    
    Node* temp = new Node(data);
	temp->next = head;
	head->pre = temp;
	head = temp;

}
void insertAtTail(Node* &head,Node* &tail, Node* &pre, int data)
{
	 Node* temp = new Node(data);
	 tail->next = temp;
	 temp->pre = tail;
	 tail = temp;
	 pre = tail->pre;
}
void insertAtMiddle(Node* &head,Node* &tail, Node* &pre,int position, int data)
{
	if(position == 1)
	{
		insertAtHead(head,data);
		return;
	}


}


int main()
{
	Node* head;
	Node* pre;
	Node* tail;
	Node* node1;
	head = node1;
	pre = node1;
	tail = node1;

	insertAtHead(head,20);
	insertAtHead(head,10);
	insertAtHead(head,21);


    insertAtTail(head, tail,pre, 99);
     insertAtTail(head, tail,pre, 100);

	print(head);

}