#include "stack_using_array.h"

int main(){

    stack test;
    for(int i{0}; i < 5; i++) test.push(i);
    test.peek();
    test.display();
    std::cout << "------\n";
    test.pop();
    test.pop();
    test.display();
    test.peek();
    return 0;
}