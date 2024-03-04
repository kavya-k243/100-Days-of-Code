#include <bits/stdc++.h>

using namespace std;

class ListNode {
  public:
    int val;
  ListNode * next;
  ListNode(int x) {
    val = x;
    next = NULL;
  }
};

void PrintList(ListNode * head) // Function to print the LinkedList
{
  ListNode * curr = head;
  for (; curr != NULL; curr = curr -> next)
    cout << curr -> val << "-->";
  cout << "null" << endl;
}

ListNode * InsertatFirst(int value, ListNode * head) {

  // Step1 : creating a new Node with the given val
  ListNode * newnode = new ListNode(value);

  // Step2 : Making next of newly created Node to point the head of LinkedList
  newnode -> next = head;

 
  head = newnode;
  return head;
}

int main() {
  ListNode * head = NULL; 
  head = InsertatFirst(4, head);
  head = InsertatFirst(3, head);
  head = InsertatFirst(2, head);
  head = InsertatFirst(1, head);
  cout << "LinkedList before inserting 243 at beginning : " << endl;
  PrintList(head);
  head = InsertatFirst(243, head);
  cout << "LinkedList after inserting 243 at beginning : " << endl;
  PrintList(head);
  return 0;
}