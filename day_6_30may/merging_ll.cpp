using namespace std;

// This is an input struct. Do not edit.
class LinkedList {
public:
  int value;
  LinkedList *next = nullptr;

  LinkedList(int value) {
    this->value = value;
  }
};

LinkedList* mergingLinkedLists(LinkedList* linkedListOne, LinkedList* linkedListTwo) {
  // Write your code here.

  LinkedList* curr = linkedListOne;
  LinkedList* curr2 = linkedListTwo;

  while(curr != curr2){
    if(curr == nullptr){
      curr = linkedListTwo;
    }
    else{
      curr = curr->next;
    }
    if(curr2==nullptr){
      curr2 = linkedListOne;
      
    }
    else{
      curr2 = curr2->next;
    }
  }
  return curr;
}

