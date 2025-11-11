#include <iostream>
using namespace std;

class Counter {
    static int count;
public:
    Counter() { count++; }
    static void showcount() {
        cout << "Number of objects created: " << count << endl;
    }
};

int Counter::count = 0;

int main() {
    Counter c1, c2;
    Counter::showcount();
    Counter c3, c4, c5;
    Counter::showcount();
    return 0;
}