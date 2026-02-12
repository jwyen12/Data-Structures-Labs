#ifndef STACK_USING_LINKEDLIST_H
#define STACK_USING_LINKEDLIST_H
#include "Linkedlist.h"
#include <iostream>

class stack {
    linkedList internal_stack;

    public:
        stack();
        void push(int val);
        void pop();
        void peek();
        void display();
};


#endif