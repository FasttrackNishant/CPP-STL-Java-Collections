#include <iostream>
#include <list>
using namespace std;

void displayList(const list<int> &lst) {
    for (const int &element : lst) {
        cout << element << " ";
    }
    cout << endl;
}

int main() {
    
    list<int> myList = {1, 2, 3, 4, 5};

    displayList(myList);

    // Inserting elements at the front

    myList.insert(myList.begin(), 0); // Insert 0 at the front
    myList.insert(myList.begin(), -1); // Insert -1 at the front

    cout << "List after inserting at the front: "<<endl;
    displayList(myList);


    // erase in list
    myList.erase(myList.begin()); // Remove the first element

    cout << "List after erasing the first element: "<<endl;
    displayList(myList);

    // erasing the range of elements
    myList.erase(myList.begin(), myList.end()); // Remove all elements

    cout << "List after erasing all elements: "<<endl;
    displayList(myList);
    cout<< "Size of the list after erasing all elements: " << myList.size() << endl;

    return 0;
}