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

int maxDepth(Node* root){
	if(root == NULL) return 0;

	int lh = maxDepth(root->left);
	int rh = maxDepth(root->right);

	int maxheight = max(lh,rh) + 1;
     
     return maxheight;
}

int main(){
   Node* root = new Node(1);
   root->left = new Node(2);
   root->right = new Node(3);
   root->left->left = new Node(4);
   root->left->right = new Node(5);
   root->right->left = new Node(6);
   root->right->right = new Node(7);
  
  cout<<maxDepth(root)<<endl;

	return 0;
}
