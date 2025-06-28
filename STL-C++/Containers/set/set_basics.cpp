#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

int main() {

    //unordered_set implements a hash table
    //set implements a balanced binary search tree
    //set is ordered, unordered_set is not ordered

    // Time Complexity:
    // - Insertion: O(log n) for set, O(1) for unordered_set
    // - Deletion: O(log n) for set, O(1) for unordered_set
    // - Search: O(log n) for set, O(1) for unordered_set
    // - Space Complexity: O(n) for both set and unordered_set

    // Time Complexity for set:
    // - Insertion: O(log n)
    // - Deletion: O(log n)
    // - Search: O(log n)       
    // Space Complexity: O(n)


    // Create a set of integers
    set<int> mySet;
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(30);
    mySet.insert(20); // Duplicate, will not be added


    // Display the elements in the set
    cout << "Elements in the set: ";
    for (const auto& elem : mySet) {
        cout << elem << " ";
    }
    cout << endl;   


    // unordered_set
    unordered_set<int> myUnorderedSet;
    myUnorderedSet.insert(10);
    myUnorderedSet.insert(20);
    myUnorderedSet.insert(30);
    myUnorderedSet.insert(20); // Duplicate, will not be added  
    myUnorderedSet.insert(2);

    cout << "Elements in the unordered set: ";
    for(auto i : myUnorderedSet) {
        cout << i << " ";
    }
    cout << endl;

    // size
    cout << "Size of set: " << mySet.size() << endl;
    cout << "Size of unordered set: " << myUnorderedSet.size() << endl;


    if(mySet.find(20) != mySet.end()) {
        cout << "20 is present in the set" << endl;
    } else {
        cout << "20 is not present in the set" << endl;
    }

    return 0;
}