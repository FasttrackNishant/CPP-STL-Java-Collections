#include <iostream>
#include <list>

using namespace std;

void displayList(const list<int> &lst)
{
    for (const int &element : lst)
    {
        cout << element << " ";
    }
    cout << endl;
}

int main()
{

    // creation
    list<int> myList;

    // insertion

    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);
    myList.push_back(40);
    myList.push_back(50);
    myList.push_back(60);
    myList.push_back(30);
    myList.push_back(20);    
    myList.push_front(5);

    cout << "List elements after insertion: ";
    displayList(myList);

    cout << "Size of the list: " << myList.size() << endl;

    cout << "Is Empty: " << (myList.empty() ? "Yes" : "No") << endl;

    // removal
    // myList.pop_front();
    // myList.pop_back();

    cout << "List elements after removal: ";
    displayList(myList);


    list<int> :: iterator it = myList.begin();

    cout<< "Iterating through the list: ";
    while(it != myList.end())
    {
        cout<< *it << " ";
        it++;
    }   

    myList.remove(30); // remove all occurrences of 30
    cout << "\nList elements after removing 30: ";
    displayList(myList);

    // cout << "Front element: " << myList.front() << endl;
    // cout << "Back element: " << myList.back() << endl;

    // // Begin and End
    // cout << "First element: " << *myList.begin() << endl;
    // cout << "Last element: " << *myList.rbegin() << endl;

    return 0;
}