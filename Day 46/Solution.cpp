
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
   
    Node* temp = head;  
    
   
    stack<int> st;     

  
    while (temp != nullptr) {
     
        st.push(temp->data); 
        
  
        temp = temp->next;    
    }
    

    temp = head; 
    
   
    while (temp != nullptr) {
        
        temp->data = st.top();  
        
        st.pop();              
        
      
        temp = temp->next;     
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
  
    Node* head = new Node(143);
    head->next = new Node(243);
    head->next->next = new Node(10);
    head->next->next->next = new Node(22);


    cout << "Original Linked List: ";
    printLinkedList(head);


    head = reverseLinkedList(head);

    
    cout << "Reversed Linked List: ";
    printLinkedList(head);

    return 0;
}
