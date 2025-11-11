#include <iostream>
using namespace std;

class Demo
{
public:
    Demo()
    {
        cout << "Constructor is called: Object created!" << endl;
    }

    ~Demo()
    {
        cout << "Destructor is called: Object destroyed!" << endl;
    }
};

int main()
{
    cout << "Inside main function." << endl;

    Demo obj1;
    {
        cout << "Creating a new object" << endl;
        Demo obj2;
        cout << "Destroying the second object" << endl;
    }

    cout << "Back to main, program ending soon..." << endl;

    return 0;
}
