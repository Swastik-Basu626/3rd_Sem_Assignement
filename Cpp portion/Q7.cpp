#include<iostream>
using namespace std;

class func2;
class func1{
    private:
        int A;
    public:
        void setData(int a){
            A = a;
    }
    friend void max(func1, func2);
};
class func2{
    private:
        int B;
    public:
        void setData(int b){
            B = b;
    }
    friend void max(func1, func2);
};

void max(func1 obj1, func2 obj2){
    if(obj1.A > obj2.B){
        cout<<"A is maximum: "<<obj1.A<<endl;
    }
    else{
        cout<<"B is maximum: "<<obj2.B<<endl;
    }
}

int main(){
    func1 obj1;
    func2 obj2;
    int a, b;
    cout<<"Enter value of A: ";
    cin>>a;
    obj1.setData(a);
    cout<<"Enter value of B: ";
    cin>>b;
    obj2.setData(b);
    max(obj1, obj2);
    return 0;
}