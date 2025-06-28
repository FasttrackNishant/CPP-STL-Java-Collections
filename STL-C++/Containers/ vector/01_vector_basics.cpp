#include <iostream>
#include <vector>

using namespace std;

void printVec(vector<int> v)
{
    for (auto it2 : v)
    {
        cout << it2 << " ";
    }
    cout << endl;
}

int main() {

    vector<int> first;
    vector<int> second;

    first.push_back(10);
    first.push_back(20);
    first.push_back(30);

    second.push_back(40);
    second.push_back(50);
    second.push_back(60);
    second.push_back(70);

    cout << "For Each Loop" << endl;
    // for eachloop 
    for(int i : first)
    {
        cout << i << " ";
    }
    cout << endl;

    //vector methods
    cout<< "---------Vector Methods---------" << endl;

    vector<int> methodArr;

    methodArr.push_back(1);
    methodArr.push_back(2);
    methodArr.push_back(3);
    methodArr.push_back(4);

    cout<<"-->Capacity, Size and Max Size of Vector" << endl;
    //capacity -> how much elements can be there in vector 
    // its size gets doubled when we add more elements
    cout << "Capacity: " << methodArr.capacity() << endl;
    cout << "Size: " << methodArr.size() << endl;

    //this is accordig to system space
    cout << "Max Size: " << methodArr.max_size() << endl;

    methodArr.push_back(5);
    cout << "After adding one more element" << endl;
    // this is doubled than the original one
    cout << "Capacity: " << methodArr.capacity() << endl;
    cout << "Size: " << methodArr.size() << endl;

    cout<<"-->Reserve Vector" << endl;
    //reserve -> it will reserve the space for the vector , minimum capacity will be 10
    methodArr.reserve(10);
    cout << "After reserving space for 10 elements" << endl;
    cout << "Capacity: " << methodArr.capacity() << endl;
    cout << "Size: " << methodArr.size() << endl; 


    //clear
    cout<<"-->Clear Vector" << endl;
    //clear -> it will clear the vector but capacity will remain same
    methodArr.clear();
    cout << "After clearing the vector" << endl;
    cout << "Capacity: " << methodArr.capacity() << endl;
    cout << "Size: " << methodArr.size() << endl;

    //insert
    cout<<"-->Insert Vector" << endl;
    methodArr.insert(methodArr.begin(), 100); //insert at the beginning
    methodArr.insert(methodArr.begin() + 1, 200); //insert at the second position
    methodArr.insert(methodArr.end(), 300); //insert at the end

    cout << "After inserting elements" << endl;
    printVec(methodArr);

    //erase
    cout<<"-->Erase Vector" << endl;
    //erase single element
    methodArr.erase(methodArr.begin()); //erase first element
    cout << "After erasing first element" << endl;
    printVec(methodArr);

    //erase all 
    methodArr.erase(methodArr.begin(), methodArr.end()); //erase all elements
    cout << "After erasing all elements" << endl;
    cout<< "Size: " << methodArr.size() << endl;
    cout<< "Capacity: " << methodArr.capacity() << endl;


    //swap : it will swap the contents of two vectors , with size and capacity
    cout<<"-->Swap Vector" << endl;
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {4, 5, 6};
    cout << "Before Swap" << endl;
    cout << "v1: ";
    printVec(v1);
    cout << "v2: ";
    printVec(v2);   
    v1.swap(v2); //swap the contents of v1 and v2
    cout << "After Swap" << endl;
    cout << "v1: ";
    printVec(v1);
    cout << "v2: ";
    printVec(v2);

    //traversing vector using iterator
    cout<<"---------Traversing Vector using Iterator--------" << endl;

    //create an iterator
    cout << "Iterator" << endl;
    vector<int> :: iterator it = first.begin();

    while (it != first.end())
    {
       cout<<*it<<" ";
       it++;
    }

    return 0;
}