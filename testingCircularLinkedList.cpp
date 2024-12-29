// This program demonstrates the add and 
// display linked list operations.
 
#include "CircularLinkedList.h" 
using namespace std; 
 
int main() 
{ 
   CircularLinkedList list; 
   list.insertion(2); 
   list.insertion(7); 
   list.insertion(12); 
   list.display(); 
   cout << endl; 
   return 0; 
}