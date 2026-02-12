#include "stack_using_array.h"

stack::stack(){
    cap = 1;
    top_index = -1;
    internal_stack = new int[cap];
}


void stack::resize(){
    int* newArr = new int[cap*2];
    for(int i{0}; i<cap; i++){
        newArr[i] = internal_stack[i];
    }

    delete[] internal_stack;
    internal_stack = newArr;
    cap *=2;
}


void stack::push(int val){
    top_index++;
    if(top_index == cap) resize();
    internal_stack[top_index] = val;
    
}


void stack::pop(){
    top_index--;
}


void stack::peek(){
    std::cout << internal_stack[top_index] << std::endl;
}


void stack::display(){
    for(int i = top_index; i>=0; i--){
        std::cout << internal_stack[i] <<"\n_" << std::endl;
    }

}