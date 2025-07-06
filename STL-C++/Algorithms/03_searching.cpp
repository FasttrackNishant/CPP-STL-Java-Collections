 #include <iostream>
 using namespace std;
 
 void printArray(const vector<int>& arr) {
     for (auto i : arr) {
         cout << i << " ";
     }
     cout << endl;
 }

 int main() {

    // binary_search function
    // time complexity: O(log n)
    // space complexity: O(1)
    // This function checks if a given element is present in the sorted range [first, last
    // It shoulde be monotonically sorted : ascending or descending
    // It returns true if the element is found, otherwise false.

    vector<int> arr = {10, 20, 30, 40, 50, 60, 70};

    int target = 30; 
    bool it = binary_search(arr.begin(), arr.end(), target);
    if (it) {
        cout << "Element " << target << " is present in the array." << endl;
    } else {
        cout << "Element " << target << " is not present in the array." << endl;
    }

    // lower_bound function
    // time complexity: O(log n)
    // space complexity: O(1)
    // This function returns an iterator to the first element that is not less than (i.e, greater or equal to) the given value.
    // Example: If the array is {10, 20, 30, 40, 50} and we search for 35, it will return an iterator to 40.
    // > = 

    auto it_lower = lower_bound(arr.begin(), arr.end(), 35);
    if (it_lower != arr.end()) {
        cout << "Lower bound of 35 is: " << *it_lower << endl;
    } else {
        cout << "No element found that is greater than or equal to 35." << endl;
    }

    // upper_bound function
    // time complexity: O(log n)
    // space complexity: O(1)
    // This function returns an iterator to the first element that is greater than the given value.
    // only > 
    // Example: If the array is {10, 20, 30, 40, 50} and we search for 35, it will return an iterator to 40.

    auto it_upper = upper_bound(arr.begin(), arr.end(), 35);
    if (it_upper != arr.end()) {
        cout << "Upper bound of 35 is: " << *it_upper << endl;
    } else {
        cout << "No element found that is greater than 35." << endl;
    }

    // equal_range function
    // time complexity: O(log n)
    // space complexity: O(1)
    // This function returns a pair of iterators representing the range of elements that are equal to the given value.
    // It returns a pair of iterators, where the first iterator points to the first occurrence of the value, and the second iterator points to the position just after the last occurrence
    // Example: If the array is {10, 20, 30, 30, 40, 30} and we search for 30, it will return a pair of iterators pointing to the first and last occurrences of 30.
    // [ first, second ) : i.e, first is inclusive and second is exclusive

    vector<int> arr2 = {10, 20, 30, 30, 40, 50};
    auto range = equal_range(arr2.begin(), arr2.end(), 30);
    if (range.first != range.second) {
        cout << "Equal range of 30 is: [" << *range.first << ", " << *(range.second - 1) << "]" << endl;
    } else {
        cout << "No elements found that are equal to 30." << endl;
    }

    // equal_range means that it will return the range of elements that are equal to the given value.
    // like if the array is {10,11,12,13,12,15} and we search for 12, it will return a pair of iterators pointing to the first and last occurrences of 12.
    // If the value is not present, it will return a pair of iterators pointing to the position where the value would be inserted.
    // above will return [12, 12] because it is inclusive of the first and exclusive of the second.
    
    // for there vector needs to be sorted in ascending order
    // 	•	First iterator → points to the first occurrence of the value
    // 	Second iterator → points to the first element greater than the value

    return 0;
 }