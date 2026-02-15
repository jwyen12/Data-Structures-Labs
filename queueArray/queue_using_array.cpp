#include "queue_using_array.h"

queue::queue(){
    capacity = 1;
    internal_queue = new int[1];
    front_index = 0;
    rear_index = capacity-1;
    count = 0;
}


queue::~queue(){
    delete[] internal_queue;
}


void queue::resize(){
    int new_capacity = capacity * 2;
    int* newArr = new int[new_capacity];

    for(int i = 0; i<count; i++){
        newArr[i] = internal_queue[(front_index+i) % capacity];
    }

    front_index = 0;
    capacity = new_capacity;
    rear_index = count -1;
    delete[] internal_queue;
    internal_queue = newArr;

}


void queue::enqueue(int val){
    if(count == capacity) resize();

    rear_index = (rear_index+1) % capacity;
    internal_queue[rear_index] = val;
    count++;
}


void queue::dequeue(){
    if(count == 0) return;

    count--;
    front_index = (front_index+1) % capacity;
}


void queue::peek(){
    if(count == 0){
        std::cout << "The queue is empty\n";
    }
    else{
        std::cout << internal_queue[front_index];
    }
}


void queue::display(){
    if(count == 0){
        std::cout << "The queue is empty\n";
    }
    for(int i = 0; i < count; i++){
        std::cout << internal_queue[(front_index + i) % capacity] << "<-";
    }
    std::cout << std::endl;
}
