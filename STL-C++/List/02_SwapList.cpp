#include <iostream>
#include <list>
using namespace std;

int main()
{
    // Declare two lists
    list<int> list1 = {1, 2, 3, 4, 5};
    list<int> list2 = {6, 7, 8, 9, 10};

    list<int>::iterator it1 = list1.begin();
    while (it1 != list1.end())
    {
        cout << *it1 << " ";
        it1++;
    }

    cout << endl;

    list<int>::iterator it2 = list2.begin();
    while (it2 != list2.end())
    {
        cout << *it2 << " ";
        it2++;
    }

    cout << "\nSwapping the lists...\n";

    // Swap the two lists
    // After this operation, list1 will contain elements of list2 and vice versa
    list1.swap(list2);

    cout << "List 1 after swap: ";
    it1 = list1.begin();
    while (it1 != list1.end())
    {
        cout << *it1 << " ";
        it1++;
    }

    cout << "\nList 2 after swap: ";
    it2 = list2.begin();
    while (it2 != list2.end())
    {
        cout << *it2 << " ";
        it2++;
    }

    return 0;
}