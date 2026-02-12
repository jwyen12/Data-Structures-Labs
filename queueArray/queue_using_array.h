#ifndef QUEUE_USING_ARRAY_H
#define QUEUE_USING_ARRAY_H
#include <iostream>

class queue {
    int* internal_queue;
    int cap;
    int top_index;
    void resize();

    public:
        queue();
        void enqueue(int val);
        void dequeue();
        void display();
};
#endif
