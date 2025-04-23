# Queue Data Structure, Recursive Search, and Insertion Sort


This project implements three core components in C++:

1. **Template Queue Class** — A generic queue implemented using a singly linked list.
2. **Recursive Linear Search** — Finds the last occurrence of a value in a vector.
3. **Insertion Sort on Queue** — Sorts a queue of integers using insertion sort logic.

All functionality is implemented using clean object-oriented design with separate header and implementation files.

---

## 🧠 Features

### ✅ Queue Class (`Queue.h`, `Queue.cpp`)
- Template class for any data type.
- Supports the following operations:
  - `push()`
  - `pop()`
  - `front()`
  - `size()`
  - `empty()`
  - `move_to_rear()` – moves the front element to the rear
  - `display()` – helper to print all elements without altering order

### ✅ Recursive Search (`functions.h`, `functions.cpp`)
- Function: `int recursive_last_index(const std::vector<int>& vec, int target, int index)`
- Searches for the **last occurrence** of a target in a vector using recursion.

### ✅ Insertion Sort (`functions.h`, `functions.cpp`)
- Function: `void insertion_sort(Queue<int>& q)`
- Sorts the queue in ascending order by moving elements into a temporary vector.

---

## 🛠 How to Compile

```bash
g++ main.cpp Queue.cpp functions.cpp -o program
