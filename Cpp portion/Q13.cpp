#include<iostream>
using namespace std;
class abstract{
    public:
    virtual void display()=0; // pure virtual function
};
class derived :public abstract{
    public:
    void display(){
        cout<<"Pure virtual function implemented in derived class."<<endl;
    }
};

int main(){
    derived obj;
    obj.display();
    return 0;
}