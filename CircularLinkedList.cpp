#include "CircularLinkedList.h"
using namespace std;


void CircularLinkedList::insertion(int number) //ask about the difference about head and head-nextPtr
{
    /* Functionality of insertion.
    if its the first node created then it will create the node and point to itself, making it circular.
    if its not, then it needs to do the following. Change the n-1 index to point to it, and change its pointer to the head pointer.
    */
   Node *newNode;
   newNode = new Node(number);

    if(head == NULL) 
    {
        head = newNode;
        head->nextPtr = head;
    }
    else{
        newNode->nextPtr=head; //This is saying that this new node is now pointing to the head
        Node* temp = head; //we have a temp pointer pointing to the head. Let me clear that there is also a node being created in this instance. 

        while(temp->nextPtr != head){ //now that this node is going through every single node until it reaches the "head" since that marks the end of the list.
            temp = temp->nextPtr; 
        }
        temp->nextPtr = newNode; //Now the newest node is being pointed by the node previous to it. 
    }

}
    /*
    * FUNCTIONALITY: it should go through with a pointer (that we delete at the end) and goes through the list of pointers.
    * Then, it shoud check the Node value associated with each of the pointers. 
    * Edge case: there is nothing in the list. Return nothing
    * Case: delete the middle of the list, all of the pointers will be messed up.
    */
 void CircularLinkedList::deletion(int number) {
    if (head == NULL) {
        cout << "List is empty." << endl;
        return;
    }

    Node* current = head;
    Node* previous = NULL;
    Node* future = head->nextPtr;

    do {
        if (current->value == number) {
            cout << "Deleting value: " << current->value << endl;

            // Delete the node pointed to by previous->nextPtr
            Node* nodeToDelete = current;
            if (previous == NULL) {
                head = future; // Update head if deleting the head node
            } else {
                previous->nextPtr = future; // Update previous node's nextPtr
            }
            delete nodeToDelete;

            // Update pointers
            current = future;
            future = future->nextPtr;
        } else {
            // Move to the next nodes
            previous = current;
            current = future;
            future = future->nextPtr;
        }
    } while (current != head);
}

int CircularLinkedList::search(int number)
{
    int counter = 0;
    if (head == NULL) {
        cout << "List is empty." << endl;
        return 0;
    }
    else{
        Node* temp = head; //we have a temp pointer pointing to the head. Let me clear that there is also a node being created in this instance. 

        while(temp->nextPtr != head){ //now that this node is going through every single node until it reaches the "head" since that marks the end of the list.
            if(temp->value==number)
                counter++;
            temp = temp->nextPtr; 
        }
        return counter;
    }
}

void CircularLinkedList::display()
{
    if (head == NULL) {
        cout << "List is empty." << endl;
        return;
    }
    Node *nodePtr = head;
    
    do {
        // Print the value in the current node
        cout << nodePtr->value << " ";
        // Move on to the next node
        nodePtr = nodePtr->nextPtr;
    } while (nodePtr != head);


}


 
 
int main() 
{ 
   CircularLinkedList list; 
   list.deletion(3);
   list.display();
   
   list.insertion(2); 
   list.insertion(7); 
   list.insertion(2);
   list.insertion(2);
   list.insertion(7);
   list.insertion(8);
   list.insertion(12); 
   list.deletion(7);
   cout << "the number 2 has appeared " << list.search(2) << " times. " << endl;
   list.display(); 
   list.display();
   cout << endl; 
   return 0; 
}