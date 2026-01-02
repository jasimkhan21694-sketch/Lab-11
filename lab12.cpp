#include <iostream>
using namespace std;
class Shape {
public:
    virtual void area() {
        cout << "Base" << endl;
    }
};
class Circle : public Shape {
public:
    void area() override {
        cout << "Circle" << endl;
    }
};
class Rectangle : public Shape {
public:
    void area() override {
        cout << "Rectangle" << endl;
    }
};
class Triangle : public Shape {
public:
    void area() override {
        cout << "Triangle" << endl;
    }
};
int main() {
    Triangle t;
    t.area();
    Shape* s = &t;
    s->area();
    return 0;
}
