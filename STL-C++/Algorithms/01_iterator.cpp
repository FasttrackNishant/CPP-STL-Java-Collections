#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void printArray(const vector<int>&arr)
{
    for(auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}

void printDouble(int a)
{
    cout << 2 * a << endl;
}

bool checkEven(int a)
{
    return a % 2 == 0;
}
int main()
{

    vector<int> arr = {21, 10, 33, 45, 33, 100, 33};

    // range on the container function
    for_each(arr.begin(), arr.end(), printDouble);

    // this returns an iterator to the first element that matches the value 10
    vector<int>::iterator it = find(arr.begin(), arr.end(), 100);
    cout << "Element using find function: " << *it << endl;

    // find_if function
    auto it1 = find_if(arr.begin(), arr.end(), checkEven);
    cout<< "First even element using find_if function: " << *it1 << endl;

    // count function
    int target = 33;   
    int countTarget = count(arr.begin(), arr.end(), target);
    cout << "Count of " << target << " in the array: " << countTarget<< endl;

    // count_if function
    int countEven = count_if(arr.begin(),arr.end(), checkEven);
    cout << "Count of even numbers in the array: " << countEven << endl;

    // sort function
    // time complexity: O(nlogn)
    // space complexity: O(n)
    sort(arr.begin(), arr.end());
    cout << "Sorted array: ";
    printArray(arr);

    // reverse function
    // time complexity: O(n)
    // space complexity: O(n)
    reverse(arr.begin(), arr.end());
    cout << "Reversed array: ";
    printArray(arr);

    cout<<"Before rotation: ";
    printArray(arr);
    // rotate function
    // time complexity: O(n)
    // space complexity: O(n)
    rotate(arr.begin(),arr.begin() + 2, arr.end());
    cout << "Rotated array: ";
    printArray(arr);

    // left rotate function
    // rotate array to the left by 2 positions
    cout << "Left rotated array: ";
    rotate(arr.begin(), arr.begin() + 2, arr.end());
    printArray(arr);


    // unique function
    // time complexity: O(n)
    // space complexity: O(n)
    // it remove consecutive duplicate elements from the array
    vector<int> arr2 = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5};
    cout << "Array before unique: ";
    printArray(arr2);
    auto it2 = unique(arr2.begin(), arr2.end());
    
    // this return an iterator to the end of the unique elements 
    // after iterator there are duplicate elements
    arr2.erase(it2, arr2.end()); // erase the duplicate elements    
    
    printArray(arr2);

    // partition function
    // time complexity: O(n)
    // space complexity: O(n)
    vector<int> arr3 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "Array before partition: ";
    printArray(arr3);
    // partition the array into two parts, one with even numbers and one with odd numbers
    auto it3 = partition(arr3.begin(), arr3.end(), checkEven);
    cout << "Array after partition: ";
    printArray(arr3); 

    return 0;
}