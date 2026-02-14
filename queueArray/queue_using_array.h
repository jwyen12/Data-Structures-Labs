#ifndef QUEUE_USING_ARRAY_H
#define QUEUE_USING_ARRAY_H
#include <iostream>

class queue {
    int* internal_queue;
    int capacity;
    int front_index;
    int rear_index;
    int count;
    void resize();

    public:
        queue();
        ~queue();
        void enqueue(int val);
        void dequeue();
        void display();
        void peek();

};
#endif
