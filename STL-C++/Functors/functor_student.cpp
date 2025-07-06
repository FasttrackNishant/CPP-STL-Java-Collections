#include <iostream>
using namespace std;

class Student
{
public:
    int marks;
    string name;

    Student(int m, string n) : marks(m), name(n) {}
};

// functor

class CompareStudents
{
public:
    bool operator()(const Student &s1, const Student &s2)
    {
        return s1.marks < s2.marks; // descending order based on marks
    }
};
int main()
{

    Student s1(90, "Alice");
    Student s2(85, "Bob");

    CompareStudents cmp;
    if (cmp(s1, s2))
    {
        cout << s1.name << " has less marks than " << s2.name << endl;
    }
    else
    {
        cout << s1.name << " has more or equal marks than " << s2.name << endl;
    }

    return 0;
}