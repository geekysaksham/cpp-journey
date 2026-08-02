#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    n -= 293;
    int temp = n;
    if(n<0) temp = -temp;
    int rev = 0;
    while(temp>0){
        int lastDigit = temp%10;
        rev *= 10;
        rev += lastDigit;
        temp /= 10;
    }
    if(n<0) cout<<(-rev);
    else cout<<rev;
}   