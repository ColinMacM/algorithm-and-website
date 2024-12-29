#include "NumberList.h" 
using namespace std; 

//***************************************************** 
// add adds a new element to the end of the list. * 
//***************************************************** 
void NumberList::add(double number) 
{ 
   if (head == NULL) 
      head = new ListNode(number); 
   else 
   { 
      // The list is not empty. 
      // Use nodePtr to traverse the list 
      ListNode *nodePtr = head; 
      while (nodePtr->next != NULL) 
         nodePtr = nodePtr->next; 
 
      // nodePtr->next is NULL so nodePtr points to the last node. 
      // Create a new node and put it after the last node. 
      nodePtr->next = new ListNode(number); 
   } 
} 
 
//*************************************************** 
// displayList outputs a sequence of all values * 
// currently stored in the list. * 
//*************************************************** 
void NumberList::displayList() 
{ 
   ListNode *nodePtr = head; // Start at head of list 
   while (nodePtr) 
   { 
      // Print the value in the current node 
      cout << nodePtr->value << " "; 
      // Move on to the next node 
      nodePtr = nodePtr->next; 
   } 
} 
 
//****************************************************** 
// Destructor deallocates the memory used by the list. * 
//****************************************************** 
NumberList::~NumberList() 
{ 
   ListNode *nodePtr = head; // Start at head of list 
   while (nodePtr != NULL) 
   { 
      // garbage keeps track of node to be deleted 
      ListNode *garbage = nodePtr; 
      // Move on to the next node, if any 52 nodePtr = nodePtr->next; 
      // Delete the "garbage" node 54 delete garbage; 
   } 
}

// This program demonstrates the add and 
// display linked list operations.
 
 
int main() 
{ 
   NumberList list; 
   list.add(2.5); 
   list.add(7.9); 
   list.add(12.6); 
   list.displayList(); 
   cout << endl; 
   return 0; 
}