                                
#include <iostream>
#include <algorithm>

using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    int diameterOfBinaryTree(Node* root) {
        int diameter = 0;
        height(root, diameter);
        return diameter;
    }

private:
    int height(Node* node, int& diameter) {
        if (!node) {
            return 0;
        }

        int lh = height(node->left, diameter);
        int rh = height(node->right, diameter);

        diameter = max(diameter, lh + rh);

        return 1 + max(lh, rh);
    }
};


int main() {
    Node* root = new Node(2);
    root->left = new Node(4);
    root->right = new Node(3);
    root->left->left = new Node(1);
    root->left->right = new Node(0);
    root->left->right->right = new Node(2);
    root->left->right->right->right = new Node(2);

    Solution solution;

    int diameter = solution.diameterOfBinaryTree(root);

    cout << "The diameter of the binary tree is: " << diameter << endl;

    return 0;
}
                                
                            