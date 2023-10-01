//Write a function to create a Linked List.

#include<iostream>
using namespace std;

class Node{
public:
	int data;
	Node* next;

	Node(int val){
		data = val;
		next = NULL;
	}
};

void insert(Node*& head, int val){
         Node* newNode = new Node(val);
         if(head == NULL){
         	head = newNode;
         }
         else{
         	Node* current = head;
         	while(current->next != NULL){
         		current = current->next;
         	}
         	current->next = newNode;
         }
}
void print(Node* head){
	Node* current = head;
	while(current != NULL){
		cout<<current->data<<" ";
		current = current->next;
	}
	cout<<endl;
}

int main(){
        Node* head = nullptr; // Initialize the linked list as empty

    // Insert elements into the linked list
    insert(head, 10);
    insert(head, 20);
    insert(head, 30);

    // Print the linked list
    cout << "Linked List: ";
    print(head);
}