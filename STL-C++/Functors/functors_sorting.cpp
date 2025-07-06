#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class comparator{
    public:
        bool operator()(int a, int b) {
            return a > b; // for descending order
        }
};

int main() {

    vector<int> numbers = {5, 2, 8, 1, 4};

    sort(numbers.begin(),numbers.end());
    
    cout << "Sorted numbers in ascending order: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Sort in descending order 

    sort(numbers.begin(), numbers.end(), comparator());
    cout << "Sorted numbers in descending order: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}