#include <iostream>
using namespace std;

class Shape {//Abstract class
public:
    virtual void area() = 0;// '= 0' makes the funtuin pure vertual

    // Normal member function
    void display() {
        cout << "This is a shape." << endl;
    }
};

class Circle : public Shape {
    float radius;
public:
    Circle(float r) {
        radius = r;
    }

    void area() override {
        cout << "Area of Circle: " << 3.14 * radius * radius << endl;
    }
};

class Rectangle : public Shape {
    float length, breadth;
public:
    Rectangle(float l, float b) {
        length = l;
        breadth = b;
    }

    void area() override {
        cout << "Area of Rectangle: " << length * breadth << endl;
    }
};

int main() {

    Shape *shapePtr;  // Base class pointer

    Circle c(5);
    Rectangle r(4, 6);

    shapePtr = &c;
    shapePtr->area();

    shapePtr = &r;
    shapePtr->area();

    return 0;
}