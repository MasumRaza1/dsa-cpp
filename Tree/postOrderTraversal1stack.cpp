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

void postorderTraversal1Stack(Node* root){
    Node* current = root;
    stack<Node*> st;

    while(current != NULL || !st.empty()){
        if(current != NULL){
            st.push(current);
            current = current->left;
        }
        else{
            Node* temp = st.top()->right;
            if(temp == NULL){
                temp = st.top();
                st.pop();
                cout<<temp->data<<" ";
            
            while(!st.empty() && temp==st.top()->right){
                temp= st.top();
                st.pop();
                cout<<temp->data<<" ";
            }
        }
            else{
                current = temp;
            }
        }
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

   postorderTraversal1Stack(root);
    return 0;
}
