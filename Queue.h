#pragma once
#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>

template <typename T>
class Queue {
private:
    struct Node {
        T data;
        Node* next;
        Node(const T& d) : data(d), next(nullptr) {}
    };
    Node* front_node;
    Node* rear_node;
    size_t count;

public:
    Queue();
    ~Queue();
    void push(const T& value);
    void pop();
    T front() const;
    size_t size() const;
    bool empty() const;
    void move_to_rear();
    void display();
};

#endif
