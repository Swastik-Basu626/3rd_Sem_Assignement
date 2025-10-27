#include<iostream>
#include<algorithm>

using namespace std;
int main(){
    cout<<"Enter a String"<<endl;
    string str;
    cin>>str;
    int n=str.length();
    int max=0;
    for(int i=0;i<n;i++){
        int count=1;
        for(int j=i+1;j<n;j++){
            if(str[i]==str[j]){
                max = std::max(max,count++);
            }
        }
    }
    cout<<max+1<<endl;
    return 0;
}