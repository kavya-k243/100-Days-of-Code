
#include <iostream>

struct Node {
  

    int data;        
    Node* left;      
    Node* right;      

    Node(int val) {
        data = val;   
        left = right = NULL;  
    }
};

int main() {
    Node* root = new Node(2);
    root->left = new Node(4);
    root->right = new Node(3);
    root->left->right = new Node(1);
}

                