#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    if(num<0) num = -num;
    int temp = num;
    int palindrome = 0;
    while(num>0){
        int lastDigit = num%10;
        palindrome *= 10;
        palindrome += lastDigit;
        num /= 10;
    }
    if(temp == palindrome) cout<<"Palindrome";
    else cout<<"Not a Palindrome";
}