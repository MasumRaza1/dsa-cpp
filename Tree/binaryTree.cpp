#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node* left;
	Node* right;

	Node(int val){
		data = val;
		left = NULL;
		right = NULL;
	}
};

int main(){
  
  Node* root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->right = new Node(5);

  cout<<"Tree."<<endl;
  cout<<root->data<<endl;
  cout<<root->left->data<<"\t"<<root->right->data<<endl;
  cout<<"\t \t"<<root->left->right->data<<endl;

	return 0;
}
