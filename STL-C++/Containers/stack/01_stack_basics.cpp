#include <iostream>
#include <stack>

using namespace std;

int main() {

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout << st.top() << endl; // Output: 4
    st.pop(); // Removes the top element (4)
    cout << st.top() << endl; // Output: 3
    cout << st.size() << endl; // Output: 3
    cout << (st.empty() ? "Stack is empty" : "Stack is not empty") << endl; // Output: Stack is not empty

    // size of stack
    cout << "Size of stack: " << st.size() << endl; // Output: 3

    // swapping stacks
    stack<int> st2;
    st2.push(5);
    st2.push(6);
    st.swap(st2); // Swap contents of st and st2        
    cout << "After swapping, top of st: " << st.top() << endl; // Output: 6
    cout << "After swapping, top of st2: " << st2.top() << endl; // Output: 4


    // Iterating through stack elements (not directly supported)
    // We can use a temporary stack to iterate through elements
    stack<int> temp;
    while (!st.empty()) {
        temp.push(st.top());
        st.pop();
    }

    cout << "Elements in stack after iteration: ";
    while (!temp.empty()) {
        cout << temp.top() << " ";
        st.push(temp.top()); // Restore original stack
        temp.pop();
    }
    cout << endl; // Output: 6 5
    return 0;
}