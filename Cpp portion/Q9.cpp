#include <iostream>
#include <cstring>
using namespace std;

class Student {
private:
    char* name;

public:
    Student(char* n) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }
    Student(Student &obj) {
        name = new char[strlen(obj.name) + 1]; 
        strcpy(name, obj.name);
    }

    void changeName(char* newName) {
        strcpy(name, newName);
    }

    void display() {
        cout << "Name: " << name << endl;
    }
    ~Student() {
        delete[] name;
    }
};

int main() {
    Student s1("Swastik");  
    Student s2 = s1;        
    cout << "Before change:" << endl;
    s1.display();
    s2.display();

    s1.changeName("Aniket");

    cout << "\nAfter change:" << endl;
    s1.display();
    s2.display();

    return 0;
}