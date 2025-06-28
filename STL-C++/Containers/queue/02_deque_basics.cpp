#include <iostream>
#include <queue>
using namespace std;

int main()
{

    // creation of a deque
    deque<int> dq;

    // adding elements to the deque
    dq.push_back(1);     // 1
    dq.push_back(2);     // 1, 2
    dq.push_front(3);    // 3, 1, 2
    dq.emplace_front(4); // 4, 3, 1, 2

    // displaying elements in the deque
    // 4, 3, 1, 2
    for (auto it : dq)
    {
        cout << it << " ";
    }
    cout << endl;

    dq.pop_back();  // removes 2
    dq.pop_front(); // removes 4

    // displaying elements after pop operations
    // 3, 1

    cout << "Front element: " << dq.front() << endl; // 3
    cout << "Back element: " << dq.back() << endl;   // 1

    // empty check
    if (dq.empty())
    {
        cout << "Deque is empty" << endl;
    }
    else
    {
        cout << "Deque is not empty" << endl;
    }

    // it supports iterators
    deque<int>::iterator it = dq.begin();
    cout << "First element using iterator: " << *it << endl;  // 3
    it++;                                                     // move to next element
    cout << "Second element using iterator: " << *it << endl; // 1
    it = dq.begin();                                          // reset iterator to the start

    while (it != dq.end())
    {
        cout << *it << " ";
        it++;
    }
    cout << endl;

    // at
    cout << "Element at index 0: " << dq.at(0) << endl; // 3
    cout << "Element at index 1: " << dq[1] << endl;    // 1

    // same for the swap , clear , insert, erase, resize, front, back, size functions

    // swap
    deque<int> dq2;
    dq2.push_back(5);
    dq2.push_back(6);
    dq.swap(dq2); // swaps contents of dq and dq2
    cout << "After swap, dq contains: ";
    for (auto it : dq)
    {
        cout << it << " ";
    }
    cout << endl;

    //clear
    dq.clear(); // clears all elements in dq
    cout << "After clear, dq size: " << dq.size() << endl; // 0 


    //insert
    dq.push_back(7);
    dq.push_back(8);
    dq.insert(dq.begin() + 1, 9); // inserts 9 at index 1
    cout << "After insert, dq contains: ";
    for (auto it : dq)
    {
        cout << it << " ";
    }
    cout << endl;

    //erase
    dq.erase(dq.begin() + 1); // removes element at index 1 (which is 9)
    cout << "After erase, dq contains: ";
    for (auto it : dq)
    {
        cout << it << " ";
    }
    cout << endl;

    

    return 0;
}
