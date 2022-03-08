#include "LinkedList.h"

bool LinkedList::isEmpty() {
  if (head == nullptr) //Check whether the head points to null
    return true;
  else
    return false;
}

int main() {
  LinkedList list; // Linked List created 
  cout << list.isEmpty(); //Returns true equals to 1
}
