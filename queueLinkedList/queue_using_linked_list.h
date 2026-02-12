#ifndef QUEUE_USING_LINKEDLIST_H
#define QUEUE_USING_LINKEDLIST_H
#include "Linkedlist.h"
#include <iostream>

class queue {
    linkedList internal_queue;

    public:
        queue();
        void enqueue(int val);
        void dequeue();
        void display();
};
#endif
