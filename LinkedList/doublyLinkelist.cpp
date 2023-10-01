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
		temp = temp -> next;
	}
	cout<<endl;
}
int getLength(Node* &head)
{
	Node* temp = head;
	int length = 0;
	while(temp != NULL)
	{
		length++;
		temp = temp -> next;
	}
	return length;
	}

	// Inset at head

	void insertAtHead(Node* &head, Node* &pre, int data)
	{
		Node* temp = new Node(data);
		if(head == NULL)
		{
			head = temp;
			pre = temp;

		}
		else{
		temp->next = head;
		head->pre = temp;
		head = temp;
		}
		cout<<"Head pre : "<<head->pre<<endl;
		cout<<"Head : "<<head->data<<endl;
		cout<<"pre : "<<pre->data<<endl;
	}
	void insertAtTail(Node* &head, Node* &pre, Node* &tail, int data)
	{

		Node* temp = new Node(data);
		if(head == NULL)
		{
			head = temp;
			pre = temp;
			tail = temp;
			
		}
		else{
	    tail->next = temp;
		temp->pre = tail;
		pre = tail;
		tail = temp;
		}
	
		cout<<"Head : "<<head->data<<endl;
		cout<<"pre : "<<pre->data<<endl;
		cout<<"tail : "<<tail->data<<endl;
}

void insertAtMiddle(Node* &head, Node* &pre, Node* &tail, int position, int data)
{    
    // head
    if (position == 1) {
        insertAtHead(head, pre, data);
        return;
    }

    // middle or tail
    Node* temp = head;
    Node* nodetoInsert = new Node(data);

    int count = 1;
    while (count < position - 1 && temp != NULL) {
        temp = temp->next;
        count++;
    }

    if (temp == NULL) {
        // position is greater than the length of the linked list
        // insert at the end of the linked list
        insertAtTail(head, pre, tail, data);
        return;
    }

    nodetoInsert->next = temp->next;
    if (temp->next != NULL) {
        temp->next->pre = nodetoInsert;
    }
    temp->next = nodetoInsert;
    nodetoInsert->pre = temp;

    // update the tail if the new node is inserted at the end
    if (nodetoInsert->next == NULL) {
        tail = nodetoInsert;
        pre = tail->pre;
    }

    cout<<"hey hey Head : "<<head->data<<endl;
		cout<<"pre : "<<pre->data<<endl;
		cout<<"tail : "<<tail->data<<endl;
}


int main()
{
	Node* head;
	Node* pre;
	Node* tail;
	Node* node1 = new Node(10);
	head = node1;
	pre = node1;
	tail = node1;


	print(head);
	cout<<"No. of nodes present : "<<getLength(head)<<endl;

          
	insertAtHead(head, pre, 20);
	insertAtHead(head, pre, 21);
	insertAtTail(head, pre, tail, 90);
	insertAtTail(head, pre, tail, 91);

	insertAtMiddle(head,pre,tail,6,98);
	insertAtMiddle(head,pre,tail,7,88);

		print(head);
	return 0;
}