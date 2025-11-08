#include<iostream>
using namespace std;

class shapes{
    public:
    void area(int l, int b){
        cout<<"Area of rectangle: "<<l*b<<endl;
    }
    void area(int s){
        cout<<"Area of square: "<<s*s<<endl;
    }
    void area(float r){
        cout<<"Area of circle: "<<3.14*r*r<<endl;
    }
};

int main(){
    shapes obj;
    obj.area(5, 10);   
    obj.area(7);       
    obj.area(3.5f);
    return 0;
}