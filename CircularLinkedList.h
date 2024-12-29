#include <iostream>
using namespace std;
class CircularLinkedList{
    protected:
        struct Node
        {
            int value;
            Node *nextPtr;
            Node(int otherValue, Node *otherNextNode = NULL){ //changing this to Head would be difficult so I'm keeping it to null for now
                value = otherValue;
                nextPtr = otherNextNode;
            }
        };
        Node *head = NULL; //head pointer   
    public: 
        
        void insertion(int number);
        void deletion(int number);
        int search(int number);
        void display();

};