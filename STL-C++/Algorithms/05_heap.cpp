#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printVector(const vector<int> &v) {
    for (const auto &elem : v) {
        cout << elem << " ";
    }
    cout << endl;
}
int main() {

    vector<int> v = {11,2, 33, 84, 5};

    // Make Heap
    // Time Complexity: O(n)
    // Space Complexity: O(1)

    cout << "Original vector: ";
    printVector(v);

    make_heap(v.begin(), v.end());
    cout << "Heap after make_heap: ";
    printVector(v);

    v.push_back(100);
    // this will fail if we don't call make_heap again by calling push_heap
    cout << "Heap after push_back(100) No Change Heap Break: ";  
    printVector(v);

    // push element into Heap
    // Time Complexity: O(log n)
    // Space Complexity: O(1)
    // Note: The vector must be a valid heap before calling push_heap
    
    push_heap(v.begin(), v.end());
    cout << "Heap after push_heap: ";
    printVector(v);

    // Deletion from Heap
    // Time Complexity: O(log n)
    // Space Complexity: O(1)

    pop_heap(v.begin(), v.end());
    cout << "Heap after pop_heap: ";
    printVector(v);
    // this will keep the largest element at the end of the vector
    v.pop_back(); // remove the last element which is the largest element

    // sorting the heap
    // Time Complexity: O(n log n)
    // Space Complexity: O(1)

    sort_heap(v.begin(), v.end());
    cout << "Heap after sort_heap: ";
    printVector(v);

   
    
    return 0;
}