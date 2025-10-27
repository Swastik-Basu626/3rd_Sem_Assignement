#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the number of array elements into the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the element you want to search"<<endl;
    cin>>key;
    bool flag=false;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            flag=true;
            break;
        }
        count++;
    }
    if(flag==true){
        cout<<"Element found at position "<<count+1<<endl;
    }else{
        cout<<"Element not found"<<endl;
    }
}