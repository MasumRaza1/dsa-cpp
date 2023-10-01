#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
};

// Function to insert a node into the BST
TreeNode* insert(TreeNode* root, int value) {
    if (root == nullptr) {
        TreeNode* newNode = new TreeNode;
        newNode->data = value;
        newNode->left = nullptr;
        newNode->right = nullptr;
        return newNode;
    }

    if (value < root->data) {
        root->left = insert(root->left, value);
    } else if (value > root->data) {
        root->right = insert(root->right, value);
    }

    return root;
}

// Function to find the path from the root to a given node
bool findPath(TreeNode* root, int target, vector<int>& path) {
    if (root == nullptr) {
        return false;
    }

    path.push_back(root->data);

    if (root->data == target) {
        return true;
    }

    if ((root->data > target && findPath(root->left, target, path)) ||
        (root->data < target && findPath(root->right, target, path))) {
        return true;
    }

    path.pop_back();
    return false;
}

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    TreeNode* root = nullptr;

    // Insert elements into the BST in the same order as in the array
    for (int i = 0; i < n; i++) {
        root = insert(root, arr[i]);
    }

    int targetNode = 57; // The target node value

    vector<int> path;
    findPath(root, targetNode, path);

    // Print the path from the root to the target node
    for (int i = 0; i < path.size(); i++) {
        cout << path[i] << " ";
    }

    delete[] arr;
    return 0;
}
