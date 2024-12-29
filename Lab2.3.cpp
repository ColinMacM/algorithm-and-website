#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* link;
};
typedef Node* NodePtr;
void Headinsert(NodePtr &Head, int TheNumber){
    Node temp_ptr;
    temp_ptr=new Node;
    temp_ptr->data=TheNumber;
}
//this function will add a node to the top of a linkedlist

int main(){
    NodePtr Head;
    Head = new Node;
    Head->data=3;
    Head->link=NULL;

    cout << "the data is " << Head->data;

    NodePtr tempPtr:
    tempPtr=new Node;
    TempPtr->data=15;
    tempPtr->link=Head; 
    return 0;
}