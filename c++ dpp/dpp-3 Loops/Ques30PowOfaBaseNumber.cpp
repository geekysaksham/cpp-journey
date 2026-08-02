#include<iostream>
using namespace std;
int main(){
    double a;
    int b;
    cout<<"Enter Base Number And Power Number: ";
    cin>>a>>b;
    double ans = 1;
    if(b<0){
        a= 1.0/a;
        b= -b;
    }
    for(int i=1;i<=b;i++){
        ans *= a;
    }
    cout<<ans;
}