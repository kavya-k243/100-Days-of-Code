                            
#include <iostream>
#include <vector>
#include <stack>

using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

class Solution{
public:
    int maxDepth(Node* root){
        if(root == NULL){
            return 0;
        }
        
        int lh = maxDepth(root->left);
        
        int rh = maxDepth(root->right);
        
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
    int depth = solution.maxDepth(root);

    cout << "Maximum depth of the binary tree: " << depth << endl;

    return 0;
}
                            
                        