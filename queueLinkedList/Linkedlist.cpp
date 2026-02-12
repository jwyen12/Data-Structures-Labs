#include "Linkedlist.h"

node::node(int input) {
    val = input;
    next = nullptr;
    prev = nullptr;
}


linkedList::linkedList() {
    head = nullptr;
    tail = nullptr;
}


linkedList::linkedList(int val) {
    node* newNode = new node(val);
    head = newNode;
    tail = newNode;
}


void linkedList::insert_front(int val) {
    if (head == nullptr) {
        node* newNode = new node(val);
        head = newNode;
        tail = newNode;
    } else {
        node* newNode = new node(val);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}


void linkedList::insert_back(int val) {
    if (head == nullptr) {
        node* newNode = new node(val);
        head = newNode;
        tail = newNode;
    } else {
        node* newNode = new node(val);
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}


void linkedList::delete_front() {
    if (head == nullptr) return;
    if (head == tail) {
        delete head;
        head = nullptr;
        tail = nullptr;
    } else {
        node* tmp = head;
        head = head->next;
        head->prev = nullptr;
        delete tmp;
    }
}


void linkedList::delete_back() {
    if (head == nullptr) return;
    if (head == tail) {
        delete head;
        head = nullptr;
        tail = nullptr;
    } else {
        node* tmp = tail;
        tail = tail->prev;
        tail->next = nullptr;
        delete tmp;
    }
}


void linkedList::display() {
    if (head == nullptr) {
        std::cout << "The list is empty" << std::endl;
        return;
    }
    node* tmp = head;
    while (tmp != nullptr) {
        std::cout << tmp->val;
        if (tmp->next != nullptr) {
            std::cout << "<-->";
        }
        tmp = tmp->next;
    }
    std::cout << std::endl;
}


void linkedList::display_last_node(){
    if(tail == nullptr) std::cout << "The data structure is empty\n";
    std::cout << tail->val << std::endl;
}


void linkedList::display_as_stack() {
    if (head == nullptr) {
        std::cout << "The stack is empty" << std::endl;
        return;
    }
    node* tmp = tail;
    while (tmp != nullptr) {
        std::cout << tmp->val;
        if (tmp->prev != nullptr) {
            std::cout << "\n--\n";
        }
        tmp = tmp->prev;
    }
    std::cout << std::endl;
}