#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    Student(string n, int a) {
        name = n;
        age = a;
        cout << "Parameterized constructor called." << endl;
    }
    Student(Student &obj) {
        name = obj.name;
        age = obj.age;
        cout << "Copy constructor called." << endl;
    }
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    cout << "Creating object s1..." << endl;
    Student s1("Swastik", 20); 

    cout << "\nCreating object s2 by copying s1..." << endl;
    Student s2(s1);  

    cout << "\nDisplaying data of both objects:\n";
    s1.display();
    s2.display();

    return 0;
}
