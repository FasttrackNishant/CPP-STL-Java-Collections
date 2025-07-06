#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
using namespace std;

void printArray(const vector<int>& arr) {
    for (auto i : arr) {
        cout << i << " ";
    }
    cout << endl;
}
int main() {
    vector<int> arr = {21, 10, 33, 45, 33, 100, 33};

    // accumulate function
    // time complexity: O(n)
    // space complexity: O(1)
    // This function computes the sum of the elements in the range [first, last).
    // The third parameter is the initial value, which is 0 in this case.
    // It returns the sum of all elements in the vector.

    int sum = accumulate(arr.begin(), arr.end(), 1000);
    cout << "Sum of elements in the array: " << sum << endl;  
    
    // inner_product function
    // time complexity: O(n)
    // space complexity: O(1)
    // This function computes the inner product of two ranges.
    // It takes two ranges and an initial value, which is 0 in this case.
    // no need to pass second end iterator, it will automatically take the size of the first range

    vector<int> arr2 = {1, 2, 3, 4, 5, 6, 7};
    vector<int> arr3 = {10, 20, 30, 40, 50, 60, 70};

    int innerProduct = inner_product(arr2.begin(), arr2.end(), arr3.begin(), 0);
    cout << "Inner product of arr2 and arr3: " << innerProduct << endl;

    // partial_sum function
    // time complexity: O(n)
    // space complexity: O(n)
    // This function computes the partial sums of the elements in the range [first, last).

    vector<int> partial_sumResult(arr.size());
    partial_sum(arr.begin(), arr.end(), partial_sumResult.begin());
    cout << "Partial sums of the array: ";
    printArray(partial_sumResult);


    // iota function
    // time complexity: O(n)
    // space complexity: O(1)
    // This function fills the range [first, last) with sequentially increasing values, starting
    // from the value specified by the third parameter, which is 1 in this case.

    vector<int> iotaArray(10);
    iota(iotaArray.begin(), iotaArray.end(), 1);
    cout << "Array filled with sequentially increasing values: ";
    printArray(iotaArray);






    return 0;
}