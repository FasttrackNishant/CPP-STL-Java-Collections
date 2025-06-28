#include <iostream>
#include <queue>

using namespace std;

void printQueue(queue<int> q) {
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main() {

    // Create a queue of integers
    queue<int> q;

    cout<< "Queue operations:" << endl;

    // Add elements to the queue
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    //size of queue
    cout<<"Size of queue: " << q.size() << endl;

    // pop an element from the queue
    cout<<"Front element before pop: " << q.front() << endl;
    // 10
    q.pop();
    // 20
    cout<<"Front element after pop: " << q.front() << endl;

    // empty check
    if (q.empty()) {
        cout<<"Queue is empty" << endl;
    } else {
        cout<<"Queue is not empty" << endl;
    }

    // swap the queue

   queue<int> first;

    first.push(1);
    first.push(2);
    first.push(3);

   queue<int> second;

    second.push(4);
    second.push(5);
    second.push(6);

    cout << "Before swap:" << endl;
    cout<< "First first element : " << first.front() << endl; // 1
    cout<< "Second first element: " << second.front() << endl; // 4

    // swap the queues
    first.swap(second); 

    cout << "After swap:" << endl;
    cout<< "First first element : " << first.front() << endl; // 4
    cout<< "Second first element: " << second.front() << endl; // 1 


   // front and back elements
   cout << "Front element: " << q.front() << endl; // 20
   cout << "Back element: " << q.back() << endl;   // 40


   // print queue elements
   cout << "Printing all elements in the queue:" << endl;
   printQueue(q);
 
   // clear queue
   // q.clear // not available in C++ STL

   while(!q.empty()) {
       cout << "Popping element: " << q.front() << endl;
       q.pop();
   }

   cout<< "Queue cleared." << endl;

   return 0;
}