#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

class node {
public:
    int val;
    node* next;
    node* prev;
    node(int input);
};

class linkedList {
private:
    node* head;
    node* tail;

public:
    linkedList();
    linkedList(int val);

    void insert_front(int val);
    void insert_back(int val);
    void delete_front();
    void delete_back();
    void display();
    void display_last_node();
    void display_as_stack();
};

#endif