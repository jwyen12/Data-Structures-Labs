#ifndef STACK_USING_ARRAY_H
#define STACK_USING_ARRAY_H
#include <iostream>

class stack {
    int* internal_stack;
    int cap;
    int top_index;
    void resize();

    public:
        stack();
        void push(int val);
        void pop();
        void peek();
        void display();
};
#endif
