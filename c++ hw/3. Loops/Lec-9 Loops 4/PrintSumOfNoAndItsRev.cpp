#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    int alt = num;
    int rev = 0;
    while(num != 0){
        rev = (rev*10) + (num%10);
        num /= 10;
    }
    cout<<"Sum of No. And Its Reverse = "<<(alt + rev);
}