#include <iostream>
using namespace std;

void printVector(const vector<int> &v) {
    for (const auto &elem : v) {
        cout << elem << " ";
    }
    cout << endl;
}

int main() {

    // Min and Max in C++
    // Time Complexity: O(n)
    // Space Complexity: O(1)

    int a = 10;
    int b = 20;

    cout<< "Maximum of " << a << " and " << b << " is: " << max(a, b) << endl;
    cout<< "Minimum of " << a << " and " << b << " is: " << min(a, b) << endl;

    // min max in the range
    vector<int> v = {1, 2, 3, 43, 5, 6, 7, 8, 9};
    cout << "Maximum in the vector: " << *max_element(v.begin(), v.end()) << endl;
    cout << "Minimum in the vector: " << *min_element(v.begin(), v.end()) << endl;
    
    return 0;
}