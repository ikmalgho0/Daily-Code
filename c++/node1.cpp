#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};

Node* insert(Node* root, int x) {
    if (root == nullptr) {
        return new Node(x);
    }
    if (x < root->data) {
        root->left = insert(root->left, x);
    }
    else if (x > root->data) {
        root->right = insert(root->right, x);
    }

    return root;
}

void inOrder(Node* root) {
    if (root == nullptr) return;

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void preOrder(Node* root) {
    if (root == nullptr) return;

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(Node* root) {
    if (root == nullptr) return;

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

int main() {
    Node* root = nullptr;

    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);

    cout << "InOrder: " << endl;
    inOrder(root);
    cout << "\nPreOrder: " << endl;
    preOrder(root);
    cout << "\nPastOrder: " << endl;
    postOrder(root);
    
    return 0;
}
