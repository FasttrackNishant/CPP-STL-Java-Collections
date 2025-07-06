#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

class Student {
public:
    int marks;
    string name;        

    Student(int m, string n) : marks(m), name(n) {}
};

class compareStudents {
public:
    bool operator()(const Student &s1, const Student &s2) {

        return s1.marks < s2.marks; // Sort in ascending order based on marks
    }
};

int main() {

    // max heap 

    priority_queue<int> maxHeap;

    // max heap using full syntax
    priority_queue<int, vector<int>, less<int>> maxHeapFullSyntax;

    // min heap
    priority_queue<int, vector<int>, greater<int>> minHeap;

    // max heap of students based on marks

    priority_queue<Student, vector<Student>, compareStudents> studentHeap;

    // Adding students to the heap
    studentHeap.push(Student(90, "Alice"));
    studentHeap.push(Student(85, "Bob"));
    studentHeap.push(Student(95, "Charlie"));

    cout<<" Top "<< studentHeap.top().name << " with marks: " << studentHeap.top().marks << endl;

    // Displaying all students in the heap
    // while (!studentHeap.empty()) {
    //     cout << studentHeap.top().name << ": " << studentHeap.top().marks << endl;
    //     studentHeap.pop();
    // }

    // this one is tricky, so be careful
    // here we are using the priority queue to sort the students based on their marks in ascending order
    // but on the top you will get the student with the lowest marks
    // so we are using the min heap to get the student with the lowest marks on the

    
    return 0;
}