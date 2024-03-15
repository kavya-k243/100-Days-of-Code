#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    int data;   
    
    Node* next;      

    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};


Node* reverseLinkedList(Node *head)
{
   Node* temp = head;  
   
   Node* prev = NULL;  
   
   while(temp != NULL){  
       Node* front = temp->next;  
       
       temp->next = prev;  
       
       prev = temp;  
       
       temp = front; 
   }
   
   return prev;  
}

Node* getKthNode(Node* temp, int k){
    k -= 1; 

    while(temp != NULL && k > 0){
        k--; 
        
        temp = temp -> next; 
    }
    
    return temp; 
}

Node* kReverse(Node* head, int k){
    Node* temp = head; 

    Node* prevLast = NULL; 
    
    while(temp != NULL){
        Node* kThNode = getKthNode(temp, k); 

        if(kThNode == NULL){
            if(prevLast){
                prevLast -> next = temp; 
            }
            
            break; 
        }
        
        Node* nextNode = kThNode -> next; 

        kThNode -> next = NULL; 

        reverseLinkedList(temp); 
        
        if(temp == head){
            head = kThNode;
        }else{
            prevLast -> next = kThNode; 
        }

        prevLast = temp; 

        temp = nextNode; 
    }
        return head; 
}

void printLinkedList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node(2);
    head->next = new Node(4);
    head->next->next = new Node(3);
    head->next->next->next = new Node(1);
    head->next->next->next->next = new Node(4);
    head->next->next->next->next->next = new Node(3);

    cout << "Original Linked List: ";
    printLinkedList(head);

    head = kReverse(head, 4);

    cout << "Reversed Linked List: ";
    printLinkedList(head);

    return 0;
}