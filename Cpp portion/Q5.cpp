#include <iostream>
using namespace std;

class Counter
{
private:
    static int count;

public:
    Counter()
    {
        count++;
    }
    static void showCount()
    {
        cout << "Number of objects created: " << count << endl;
    }
};
int Counter::count = 0;

int main()
{
    Counter::showCount();

    Counter obj1;
    Counter obj2;
    Counter obj3;
    Counter::showCount();
    Counter obj4, obj5;
    Counter::showCount();

    return 0;
}