#include "stack_using_linkedlist.h"

stack::stack(){
    linkedList internal_stack;
}


void stack::push(int val){
    internal_stack.insert_back(val);
}


void stack::pop(){
    internal_stack.delete_back();
}


void stack::peek(){
    internal_stack.display_last_node();
}


void stack::display(){
    internal_stack.display_as_stack();
}