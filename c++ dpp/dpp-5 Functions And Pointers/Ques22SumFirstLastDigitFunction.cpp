#include<iostream>
using namespace std;
int sumFirstAndLast(int n){
    int firstDigit, lastDigit = n % 10;
    while(n>0){
        firstDigit = n%10;
        n /= 10;
    }
    return firstDigit + lastDigit;
}
int main(){
    int num;
    cin>>num;
    int sum = sumFirstAndLast(num);
    cout<<sum;
}