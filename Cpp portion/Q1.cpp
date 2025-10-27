#include<iostream>
using namespace std;

int main(){
    int n; 
    cout<<"Enter the number of array elements"<<endl;
    int arr[n];
    int ep=0;
    int op=0;
    int en=0;
    int on=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0 && arr[i]%2==0){
            en+=arr[i];
        }
        if(arr[i]<0 && arr[i]%2!=0){
            on+=arr[i];
        }
        if(arr[i]>0 && arr[i]%2==0){
            ep+=arr[i];
        }
        if(arr[i]<0 && arr[i]%2!=0){
            op+=arr[i];
        }
    }
    cout<<"Sum of all the even positive numbers present in the array is"<<ep<<endl;
    cout<<"Sum of all the odd positive numbers present in the array is"<<op<<endl;
    cout<<"Sum of all the even negative numbers present in the array is"<<en<<endl;
    cout<<"Sum of all the odd negative numbers present in the array is"<<on<<endl;
}