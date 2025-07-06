#include <iostream>
#include <vector>
#include <forward_list>
#include <list>
using namespace std;

int main()
{

    vector<int> v = {1, 2, 3, 4, 5};

    // Using an iterator to traverse the vector
    vector<int>::iterator it = v.begin();

    while (it != v.end())
    {
        cout << *it << " "; // Dereference the iterator to get the value
        it++;               // Move to the next element
    }

    // Iterator Operations

    // 1. Incrementing the iterator
    it = v.begin();
    it++; // Now points to the second element

    cout << "\nAfter incrementing: " << *it << endl;

    // 2. Decrementing the iterator
    it--; // Now points back to the first element
    cout << "After decrementing: " << *it << endl;

    // 3. Accessing the element at the iterator
    cout << "Element at iterator: " << *it << endl; // Should print the first element

    // 4. Using iterator in a loop
    cout << "Using iterator in a loop: ";
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
    {
        cout << *it << " "; // Dereference to get the value
    }
    cout << endl;

    // 5. Using reverse iterator
    cout << "Using reverse iterator: ";
    for (vector<int>::reverse_iterator rit = v.rbegin(); rit != v.rend(); ++rit)
    {
        cout << *rit << " "; // Dereference to get the value
    }
    cout << endl;

    // 6. Using const iterator
    cout << "Using const iterator: ";
    for (vector<int>::const_iterator cit = v.cbegin(); cit != v.cend(); ++cit)
    {
        cout << *cit << " "; // Dereference to get the value
    }
    cout << endl;

    // 7. Using iterator with algorithms
    // Example: Using std::find to find an element
    auto found = std::find(v.begin(), v.end(), 3);
    if (found != v.end())
    {
        cout << "Element 3 found at position: " << distance(v.begin(), found) << endl; // Prints the index of the found element
    }
    else
    {
        cout << "Element 3 not found." << endl;
    }

    // Iterator Types

    // 1. Input Iterator: Can read data from a container.

    //    Example: std::istream_iterator
    //    std::istream_iterator<int> input_it(std::cin);
    //    std::istream_iterator<int> end_it;

    // 2. Output Iterator: Can write data to a container.

    //    Example: std::ostream_iterator
    //    std::ostream_iterator<int> output_it(std::cout, " ");
    //    *output_it = 10; // Writes 10 to the output stream

    // 3. Forward Iterator: Can read and write data, can be incremented.
    //    Example: std::forward_list<int>::iterator
    //    linkedList based on simple linked list
    //.   Only in forward direction

    forward_list<int> fl = {1, 2, 3, 4, 5};
    fl.push_front(0); // Adding an element at the front

    forward_list<int>::iterator fl_it = fl.begin();

    cout << "Using forward iterator: ";

    // Adding five to the elements

    while (fl_it != fl.end())
    {
        *fl_it += 10; // Dereference the iterator to get the value and add 5
        fl_it++;      // Move to the next element
    }

    // Printing Loop
    fl_it = fl.begin(); // Resetting the iterator to the beginning
    while (fl_it != fl.end())
    {
        cout << *fl_it << " "; // Dereference the iterator to get the value
        fl_it++;               // Move to the next element
    }
    cout << endl;

    forward_list<int>::iterator fl_end = fl.end();

    // not possible but lets try
    // while (fl_it != fl.begin())
    // {
    // fl_it--; // Move to the previous element (not allowed in forward_list)
    // This will not work as fl_it is already at the end
    // fl_it--; // Move to the previous element (not allowed in forward_list)
    // }

    // 4. Bidirectional Iterator: Can be incremented and decremented.
    //   Example: std::list<int>::iterator
    //  list based on doubly linked list
    //  Double Linked List and Deque

    cout << "Using bidirectional iterator: ";

    list<int> l = {10, 20, 30, 40, 50};
    list<int>::iterator l_it = l.begin();

    while (l_it != l.end())
    {
        *l_it += 5;           // Dereference the iterator to get the value and add 5
        cout << *l_it << " "; // Dereference the iterator to get the value
        l_it++;               // Move to the next element
    }

    // Lets try backward iteration
    cout << "\nUsing reverse iterator for list: ";
    l_it = l.end();
    while (l_it != l.begin())
    {
        l_it--;               // Move to the previous element
        cout << *l_it << " "; // Dereference the iterator to get the value
    }
    cout << endl;

    // 5. Random Access Iterator: Can jump to any position in the container.

    vector<int> randomVector = {100, 200, 300, 400, 500};

    vector<int>::iterator random_it = randomVector.begin();

    cout << "Using random access iterator: ";
    while (random_it != randomVector.end())
    {
        *random_it += 50;          // Dereference the iterator to get the value and add 50
        cout << *random_it << " "; // Dereference the iterator to get the value
        random_it++;               // Move to the next element
    }

    // Back Ward iteration
    cout << "\nUsing reverse iterator for random access: ";
    vector<int>::iterator random_it_rev = randomVector.end();

    while (random_it_rev != randomVector.begin())
    {
        random_it_rev--;               // Move to the previous element
        cout << *random_it_rev << " "; // Dereference the iterator to get the value
    }

    // Randomly Accessing elements
    cout << "\nRandomly accessing elements: ";

    vector<int> :: iterator randomAccess_it = randomVector.begin() + 2; // Accessing the third element
    cout << *randomAccess_it << " "; // Should print 300
    



    return 0;
}