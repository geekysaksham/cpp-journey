#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=1000;i++){
        int alt = i, sumOfDigits = 0;
        while(alt>0){
            int lastDigit = alt%10;
            sumOfDigits += lastDigit;
            alt /= 10;
        }
        if(sumOfDigits == 17) cout<<i<<", ";
    }
}