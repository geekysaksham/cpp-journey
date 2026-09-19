#include<iostream>
using namespace std;

int sumOfNumber(int n){
    if(n==0) return 0;
    int res = n + sumOfNumber(n-1);
    return res;
}

int main(){
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    cout<<"Sum Of 1 to Number = "<<sumOfNumber(num);
}