#include "queue_using_array.h"

int main(){
    queue test;
    for(int i = 0; i<10; i++) test.enqueue(i);

    test.display();
    test.dequeue();
    test.display();
    test.peek();
    return 0;
}