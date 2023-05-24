using namespace std;

// This is an input struct. Do not edit.
class LinkedList {
public:
  int value;
  LinkedList *next = nullptr;

  LinkedList(int value) { this->value = value; }
};

LinkedList *sumOfLinkedLists(LinkedList *linkedListOne,
                             LinkedList *linkedListTwo) {
  // Write your code here.
  auto newLinkedListHeadPtr = new LinkedList(0);
  auto currNode = newLinkedListHeadPtr;
  int carry = 0;

  auto nodeone = linkedListOne;
  auto nodetwo = linkedListTwo;

  while(nodeone != nullptr || nodetwo != nullptr || carry !=0){
    int valone = nodeone != nullptr ? nodeone->value : 0;
    int valtwo = nodetwo != nullptr ? nodetwo->value : 0;

    int s = valone + valtwo + carry;

    int nval = s%10;

    auto nNode = new LinkedList(nval);

    currNode->next = nNode;
    currNode = nNode;

    carry = s/10;

    nodeone =  nodeone != nullptr ? nodeone->next : nullptr;
    nodetwo = nodetwo != nullptr ? nodetwo->next : nullptr;
  }


  
  return newLinkedListHeadPtr->next;
}