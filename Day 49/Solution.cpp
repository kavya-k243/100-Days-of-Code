
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


Node* reverseLinkedList(Node* head) {
  
    if (head == NULL || head->next == NULL) {
        
   
        return head; 
    }


    Node* newHead = reverseLinkedList(head->next);

    Node* front = head->next;

    front->next = head;


    head->next = NULL;


    return newHead;
}

bool isPalindrome(Node* head) {
 
    if (head == NULL || head->next == NULL) {
        
    
        return true; 
    }
    
  
    Node* slow = head;
    Node* fast = head;
    
  
    while (fast->next != NULL && fast->next->next != NULL) {
        
 
        slow = slow->next;  
        
        
        fast = fast->next->next;  
    }
    

    Node* newHead = reverseLinkedList(slow->next);
    
    Node* first = head;  
    

    Node* second = newHead; 
    while (second != NULL) {
        
      
        if (first->data != second->data) {
            
            
            reverseLinkedList(newHead);  
            
     
            return false;
        }
        
       
        first = first->next; 
        
     
        second = second->next;  
    }
    
   
    reverseLinkedList(newHead);  
    

    return true;  
}



// Function to print the linked list
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
    head->next->next->next->next = new Node(2);

    cout << "Original Linked List: ";
    printLinkedList(head);

    if (isPalindrome(head)) {
        cout << "The linked list is a palindrome." << endl;
    } else {
        cout << "The linked list is not a palindrome." << endl;
    }

    return 0;
}
