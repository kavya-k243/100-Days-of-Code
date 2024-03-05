class Node {
public:
    int data;
    Node* next;
    public:
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
    public:
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};
// Function to calculate the length of a linked list
int lengthOfLinkedList(Node* head) {
    Node* temp = head;
    int cnt = 0;
    // Traverse the linked list and count nodes
    while (temp != NULL) {
        temp = temp->next;
        cnt++; // increment cnt for every node traversed
    }
    return cnt;
}

int main() {
    vector<int> arr = {2, 5, 8, 7};
    
    // Create a linked list
    Node* head = new Node(arr[0]);
    head->next = new Node(arr[1]);
    head->next->next = new Node(arr[2]);
    head->next->next->next = new Node(arr[3]);
    
    // Print the length of the linked list
    cout << lengthOfLinkedList(head) << '\n';
}