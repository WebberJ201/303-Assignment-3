#include "functions.h"
using namespace std;

//Recursion function for Step 2
int recursive_last_index(const vector<int>& vec, int target, int index) {
    if (index < 0) return -1;
    if (vec[index] == target) return index;
    return recursive_last_index(vec, target, index - 1);
}

//Function for Step 3
void insertion_sort(Queue<int>& q) {
    vector<int> temp;
    while (!q.empty()) {
        temp.push_back(q.front());
        q.pop();
    }

    for (size_t i = 1; i < temp.size(); ++i) {
        int key = temp[i];
        int j = i - 1;
        while (j >= 0 && temp[j] > key) {
            temp[j + 1] = temp[j];
            --j;
        }
        temp[j + 1] = key;
    }

    for (int val : temp) {
        q.push(val);
    }
}
