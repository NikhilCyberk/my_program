#include <iostream>
#include<bits/stdc++.h>
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};

void inorderTraversal(TreeNode* root) {
    if (root == nullptr) {
        return;
    }

    inorderTraversal(root->left);
    std::cout << root->data << " ";
    inorderTraversal(root->right);
}

void postorderTraversal(TreeNode* root) {
    if (root == nullptr) {
        return;
    }

    postorderTraversal(root->left);
    postorderTraversal(root->right);
    std::cout << root->data << " ";
}

void preorderTraversal(TreeNode* root) {
    if (root == nullptr) {
        return;
    }

    std::cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

int main() {
    // Create a sample binary tree
    TreeNode* root = new TreeNode(8);
    root->left = new TreeNode(3);
    root->right = new TreeNode(10);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(6);
    root->left->right->left = new TreeNode(4);
    root->left->right->right = new TreeNode(7);
    root->right->right = new TreeNode(14);
    root->right->right->left = new TreeNode(13);

    // Inorder traversal
    std::cout << "Inorder traversal: ";
    inorderTraversal(root);
    std::cout << std::endl;

    // Postorder traversal
    std::cout << "Postorder traversal: ";
    postorderTraversal(root);
    std::cout << std::endl;

    // Preorder traversal
    std::cout << "Preorder traversal: ";
    preorderTraversal(root);
    std::cout << std::endl;

    return 0;
}
