#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=1000;i++){
        int temp = i;
        int sumOfDigits = 0;
        while(temp>0){
            int lastDigit = temp%10;
            sumOfDigits += lastDigit;
            temp /= 10;
        }
        if(sumOfDigits != 23) cout<<i<<" ";
        else break;
    }
}