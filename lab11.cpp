#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
};

class Student : public Person {
public:
    int roll;
    float gpa;
    
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << roll << endl;
        cout << "GPA: " << gpa << endl;
    }
};

int main() {
    Student s1;
    s1.name = "Sara";
    s1.age = 21;
    s1.roll = 2;
    s1.gpa = 3.8;
    
    Student s2;
    s2.name = "Ahmed";
    s2.age = 22;
    s2.roll = 3;
    s2.gpa = 3.5;
    
    cout << "Student 1:" << endl;
    s1.display();
    
    cout << "\nStudent 2:" << endl;
    s2.display();
    
    return 0;
}
