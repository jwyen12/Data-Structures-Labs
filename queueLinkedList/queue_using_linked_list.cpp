#include "queue_using_linked_list.h"

queue::queue(){
    linkedList internal_queue;
}


void queue::enqueue(int val){
    internal_queue.insert_back(val);
}


void queue::dequeue(){
    internal_queue.delete_front();
}


void queue::display(){
    internal_queue.display_as_stack();
}
