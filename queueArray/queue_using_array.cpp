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

    for(int i = 0; i<capacity; i++){
        newArr[i] = internal_queue[(front_index+i) % capacity];
    }

    front_index = 0;
    capacity = new_capacity;
    rear_index = count -1;
    delete[] internal_queue;
    internal_queue = newArr;

}