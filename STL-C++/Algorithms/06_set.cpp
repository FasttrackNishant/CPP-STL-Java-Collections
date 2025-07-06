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

    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {4, 5, 6, 7, 8};

    // union of two sets
    // Time Complexity: O(n + m)
    // Space Complexity: O(n + m)
    vector<int> unionSet;
    set_union(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(),inserter(unionSet, unionSet.begin()));

    cout << "Union of two sets: ";
    printVector(unionSet);


    // intersection of two sets
    // Time Complexity: O(n + m)
    // Space Complexity: O(n + m)
    vector<int> intersectionSet;
    set_intersection(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), inserter(intersectionSet, intersectionSet.begin()));

    cout << "Intersection of two sets: ";
    printVector(intersectionSet);   

    // difference of two sets
    // Time Complexity: O(n + m)
    // Space Complexity: O(n + m)
    vector<int> differenceSet;
    set_difference(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), inserter(differenceSet, differenceSet.begin())); 
    cout << "Difference of two sets (arr1 - arr2): ";
    printVector(differenceSet);

    // symmetric difference of two sets
    // Time Complexity: O(n + m)
    // Space Complexity: O(n + m)
    // It gives elements that are in either of the sets but not in both
    // Diff from set_difference is that it considers both sets while set_difference considers only the first set
    vector<int> symmetricDifferenceSet;
    set_symmetric_difference(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), inserter(symmetricDifferenceSet, symmetricDifferenceSet.begin()));

    cout << "Symmetric Difference of two sets: ";
    printVector(symmetricDifferenceSet);    

    return 0;
 }