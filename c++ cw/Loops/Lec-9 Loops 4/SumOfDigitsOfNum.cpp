#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    int sum = 0;
    while(num != 0){
        int LastDigit = num%10;
        sum += LastDigit;
        num /= 10;
    }
    if(sum<0) sum *= -1;
    cout<<"Sum of Digits Of Number = "<<sum;
}