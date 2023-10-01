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

void postorderTraversal(Node* root){
    stack<Node*> st1, st2;
    st1.push(root);

    while(!st1.empty())
    {
        root = st1.top();
        st1.pop();
        st2.push(root);

        if(root->left != NULL){
            st1.push(root->left);
        }
         if(root->right != NULL){
            st1.push(root->right);
        }
               
    }

        while(!st2.empty()){
            cout<<st2.top()->data<<" ";
            st2.pop();
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

   postorderTraversal(root);
    return 0;
}
