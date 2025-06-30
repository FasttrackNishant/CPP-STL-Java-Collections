#include <iostream>
#include <queue>
using namespace std;

void printPriorityQueue(priority_queue<int> pq) {
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
}

int main() {
    
    // creation of a priority queue

    priority_queue<int> pq;
    // by default, it creates a max heap
    // maximum element will be at the top

    pq.push(2);
    pq.push(10);
    pq.push(6);
    pq.push(16);

    cout << "Top element: " << pq.top() << endl; // 16

    pq.pop(); // removes the top element (16)
    cout << "Top element after pop: " << pq.top() << endl; // 10
    // highest priority element will be removed

    pq.push(300);
    printPriorityQueue(pq); // prints remaining elements in the priority queue


    // no clear function in priority queue
    // to clear the priority queue, we can create a new one

    //empty check
    pq.empty() ? cout << "Priority queue is empty" << endl : cout << "Priority queue is not empty" << endl;

    // ------- Min Heap Priority Queue -------

    priority_queue<int, vector<int>, greater<int>> minHeap;
    // this will create a min heap
    // minimum element will be at the top

    minHeap.push(2);
    minHeap.push(10);
    minHeap.push(6);
    minHeap.push(16);

    cout << "Top element of min heap: " << minHeap.top() << endl; // 2  

    // pop in pq
    minHeap.pop(); // removes the top element (2)

    return 0;
}