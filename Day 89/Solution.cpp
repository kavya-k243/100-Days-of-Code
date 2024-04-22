                            
#include <iostream>
#include <vector>

using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

void postorder(Node* root, vector<int>& arr){
    if(root==NULL){
        return;
    }
    postorder(root->left, arr);
    postorder(root->right, arr);
    arr.push_back(root->data);
}

vector<int> postOrder(Node* root){
    vector<int> arr;
    postorder(root, arr);
    return arr;
}

void printVector(const vector<int>& vec) {
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
}

int main()
{
    Node* root = new Node(2);
    root->left = new Node(4);
    root->right = new Node(3);
    root->left->left = new Node(1);
    root->left->right = new Node(0);

    vector<int> result = postOrder(root);

    cout << "Postorder traversal: ";
    printVector(result);

    return 0;
}
                            
                        