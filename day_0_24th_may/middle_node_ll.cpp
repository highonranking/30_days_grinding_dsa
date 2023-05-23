// middle node of Linkedlist
using namespace std;

// This is an input struct. Do not edit.
class LinkedList {
public:
  int value;
  LinkedList *next = nullptr;

  LinkedList(int value) { this->value = value; }
};

LinkedList *middleNode(LinkedList *linkedList) {
  // Write your code here.
  LinkedList *slow = linkedList;
    LinkedList *fast = linkedList;

  while(fast!=nullptr && fast->next != nullptr){
    slow = slow->next;
    fast = fast->next->next;
  }

  return slow;
}



