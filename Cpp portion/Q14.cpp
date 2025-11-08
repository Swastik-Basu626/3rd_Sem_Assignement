#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    try
    {
        if (b == 0)
        {
            throw "Divsion by zero error!";
        }
        if (a % 2 == 0)
        {
            throw 2;
        }

    }catch (const char* msg)
    {
        cout << "Exception caught: " << msg << endl;
    }catch(int n){
        cout<<"Exception caught : "<<n<<" Even number exception"<<endl;
    }
}