#include <iostream>
using namespace std;

class Student
{
public:
    int rollNo;

public:
    void getRoll(int r)
    {
        rollNo = r;
    }

    void putRoll()
    {
        cout << "Roll Number: " << rollNo << endl;
    }
};

class Test : virtual public Student
{
public:
    float marks1, marks2;

public:
    void getMarks(float m1, float m2)
    {
        marks1 = m1;
        marks2 = m2;
    }

    void putMarks()
    {
        cout << "Marks in Subject 1: " << marks1 << endl;
        cout << "Marks in Subject 2: " << marks2 << endl;
    }
};

class Sports : virtual public Student
{
public:
    float sportsScore;

public:
    void getSports(float s)
    {
        sportsScore = s;
    }

    void putSports()
    {
        cout << "Sports Score: " << sportsScore << endl;
    }
};
class Result : public Test, public Sports
{
    float total;

public:
    void display()
    {
        total = marks1 + marks2 + sportsScore;
        putRoll();
        putMarks();
        putSports();
        cout << "Total Score: " << total << endl;
    }
};

// Main function
int main()
{
    Result r1;

    int roll;
    float m1, m2, sports;

    cout << "Enter Roll Number: ";
    cin >> roll;
    r1.getRoll(roll);

    cout << "Enter marks in two subjects: ";
    cin >> m1 >> m2;
    r1.getMarks(m1, m2);

    cout << "Enter sports score: ";
    cin >> sports;
    r1.getSports(sports);

    r1.display();

    return 0;
}