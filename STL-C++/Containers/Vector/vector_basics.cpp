#include <iostream>
#include <vector>

using namespace std;

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

    //traversing vector using iterator


    //create an iterator
    cout << "Iterator" << endl;
    vector<int> :: iterator it = first.begin();

    while (it != first.end())
    {
       cout<<*it<<" ";
       it++;
    }
    

    cout<<endl;
    cout<<"2 D vector"<<endl;

    vector<vector<int>> matrix(4, vector<int>(4, 0)); 

    return 0;
}