#include <iostream>
#include <string>
using namespace std;

class Manager {
private:
    string name;
    int age;
    double salary;

public:
    void getData() {
        cout << "\nEnter Manager Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Salary: ";
        cin >> salary;
    }
    void displayData() const {
        cout << "\nManager Name: " << name;
        cout << "\nAge: " << age;
        cout << "\nSalary: " << salary << endl;
    }
};

int main() {
    int n;

    cout << "Enter number of Managers: ";
    cin >> n;
    Manager managers[n];
    for (int i = 0; i < n; i++) {
        cout << "\n--- Enter details for Manager " << i + 1 << " ---"<<endl;
        managers[i].getData();
    }

    // Display details of all managers
    cout << "\n=== List of Managers ==="<<endl;
    for (int i = 0; i < n; i++) {
        cout << "\nManager " << i + 1 << ":";
        managers[i].displayData();
    }

    return 0;
}