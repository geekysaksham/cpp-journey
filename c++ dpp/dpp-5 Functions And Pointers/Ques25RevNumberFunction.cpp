#include<iostream>
using namespace std;
int reverseNumber(int n){
    int rev = 0;
    while(n!=0){
        rev *= 10;
        rev += n%10;
        n /= 10;
    }
    return rev;
}
int main(){
    int num;
    cin>>num;
    int rever = reverseNumber(num);
    cout<<rever;
}