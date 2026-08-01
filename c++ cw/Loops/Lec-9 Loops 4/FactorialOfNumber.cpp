#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    long long fact = 1;
    for(int i=1;i<=num;i++){
        fact *= i;
    }
    cout<<"Factorial Of "<<num<<" = "<<fact;
}