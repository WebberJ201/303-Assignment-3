#include "Queue.h"
using namespace std;

template <typename T>
Queue<T>::Queue() : front_node(nullptr), rear_node(nullptr), count(0) {}

template <typename T>
Queue<T>::~Queue() {
    while (!empty()) pop();
}

//Queue function push
template <typename T>
void Queue<T>::push(const T& value) {
    Node* new_node = new Node(value);
    if (empty()) {
        front_node = rear_node = new_node;
    }
    else {
        rear_node->next = new_node;
        rear_node = new_node;
    }
    ++count;
}

//Queue function pop
template <typename T>
void Queue<T>::pop() {
    if (!empty()) {
        Node* temp = front_node;
        front_node = front_node->next;
        delete temp;
        --count;
    }
}

//Queue function front
template <typename T>
T Queue<T>::front() const {
    if (!empty()) return front_node->data;
    throw std::runtime_error("Queue is empty");
}

//Queue function size
template <typename T>
size_t Queue<T>::size() const {
    return count;
}

//Queue function empty
template <typename T>
bool Queue<T>::empty() const {
    return count == 0;
}

//Queue function move_to_rear
template <typename T>
void Queue<T>::move_to_rear() {
    if (size() > 1) {
        T temp = front();
        pop();
        push(temp);
    }
}

//Queue function display
template <typename T>
void Queue<T>::display() {
    size_t n = size();
    for (size_t i = 0; i < n; ++i) {
        T val = front();
        cout << val << " ";
        pop();
        push(val);  // rotate to preserve order
    }
    cout << std::endl;
}

// Explicit template instantiation for int
template class Queue<int>;