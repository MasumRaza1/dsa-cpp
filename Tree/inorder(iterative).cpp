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


void inorderTraversal(Node* root){
    stack<Node*> st;
    Node* curr = root;

    while(curr != NULL || !st.empty()){
        while(curr != NULL){
            st.push(curr);
            curr = curr->left;
        }
        curr = st.top();
        st.pop();
        cout<<curr->data<<" ";
        curr = curr->right;
    }
}

  


int main(){
    Node* root = new Node(1);
   root->left = new Node(2);
   root->right = new Node(3);
   root->left->left = new Node(4);
   root->left->right = new Node(5);
   root->left->right->left = new Node(6);
     root->left->right->right = new Node(7);

   inorderTraversal(root);
  


	return 0;
}