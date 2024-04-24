                            
#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
   
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

class Solution {
public:
   
    int findMaxPathSum(Node* root, int &maxi) {
       
        if (root == nullptr) {
            return 0;
        }

     
        int leftMaxPath = max(0, findMaxPathSum(root->left, maxi));
        int rightMaxPath = max(0, findMaxPathSum(root->right, maxi));

    
        maxi = max(maxi, leftMaxPath + rightMaxPath + root->data);

       
        return max(leftMaxPath, rightMaxPath) + root->data;
    }

    
    int maxPathSum(Node* root) {
        
        int maxi = INT_MIN; 
         
        findMaxPathSum(root, maxi);
        return maxi; 
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

    int maxPathSum = solution.maxPathSum(root);
    cout << "Maximum Path Sum: " << maxPathSum << endl;


    return 0;
}
                            
                        