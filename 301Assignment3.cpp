#include <iostream>
#include "Queue.h"
#include "functions.h"
using namespace std;


int main() {
    //Creation of queue q (Step 1)
    Queue<int> q;

    for (int i = 1; i <= 10; ++i)
        q.push(i * 2);

    //Functionality of Step 1
    cout << "Original queue: ";
    q.display();

    q.move_to_rear();
    cout << "After moving front to rear: ";
    q.display();


    //Functionality of Step 2
    vector<int> data = { 1, 3, 5, 7, 5, 2 };
    cout << endl << "Example Vector: { ";
    for (int i = 0; i < data.size(); i++) {
        cout << data.at(i) << " ";
    }
    cout << "}" << endl;

    int target = 5;
    int last = recursive_last_index(data, target, data.size() - 1);
    cout << "Last occurrence of " << target << ": " << last << endl << endl;

    //Creation of Queue sort_q (Step 3)
    Queue<int> sort_q;
    sort_q.push(5);
    sort_q.push(2);
    sort_q.push(8);
    sort_q.push(1);

    cout << "Queue numbers: 5 2 8 1" << endl;

    //Functionality of Step 3
    cout << "Before sorting: ";
    sort_q.display();

    insertion_sort(sort_q);
    cout << "After sorting: ";
    sort_q.display();

    return 0;
}
