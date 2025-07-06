#include <iostream>
using namespace std;

class functorOne{
    public:
        bool operator()(int a, int b)
        {
            return a > b ; 
            // this is descending order : as we are checking if a is greater than b
            // if it return true then a will come before b
        }
};

int main() {

    functorOne cmp ;

    if(cmp(10, 20)) {
        cout << "10 is greater than 20" << endl;
    } else {
        cout << "10 is not greater than 20" << endl;
    }

    return 0;
}