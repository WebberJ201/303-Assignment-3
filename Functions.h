#pragma once
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <vector>
#include "Queue.h"
using namespace std;

// Recursive linear search to find the last occurrence
int recursive_last_index(const vector<int>& vec, int target, int index);

// Insertion sort for a queue of integers
void insertion_sort(Queue<int>& q);

#endif
