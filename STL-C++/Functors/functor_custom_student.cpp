#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Student
{
public:
    int marks;
    string name;

    Student(int m, string n) : marks(m), name(n) {}
};

class compareStudents
{
public:
    bool operator()(const Student &s1, const Student &s2)
    {
        if(s1.marks == s2.marks)
        {
            return s1.name < s2.name; // If marks are equal, sort by name in ascending order
        }

        return s1.marks < s2.marks; // Sort in ascending order based on marks
    }
};

int main()
{
    vector<Student> students;

    students.push_back(Student(90, "Alice"));
    students.push_back(Student(85, "zob"));
    students.push_back(Student(95, "Charlie"));
    students.push_back(Student(85, "John"));

    // sort(students.begin(), students.end(), [](const Student &s1, const Student &s2) {
    //     return s1.marks < s2.marks; // Sort in ascending order based on marks
    // });

    sort(students.begin(), students.end(), compareStudents());

    cout << "Students sorted by marks in ascending order:" << endl;
    for (const auto &student : students)
    {
        cout << student.name << ": " << student.marks << endl;
    }

    return 0;
}