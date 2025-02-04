#ifndef NODE.H
#define NODE.H  

// .h for node class
#include <iostream>
#include <string>

using namespace std;

class Node{
    public:
        Node();
        Node(int);
        Node(int, Node*);
        int getData();
        Node* getNext();
        void setData(int);
        void setNext(Node*);
    private:
        int data;
        Node* next;

};

#endif NODE.H