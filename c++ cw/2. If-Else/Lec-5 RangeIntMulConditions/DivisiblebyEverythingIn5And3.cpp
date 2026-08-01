#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a Number : ";
    cin>>num;
    if((num%5)==0 && (num%3)==0) cout<<"Anuj- Divisible by 5 and 3";
    else if((num%3)==0) cout<<"Sakshi- Divisible by 3 only";
    else if((num%5)==0) cout<<"Kartikey- Divisible by 5 only";
    else cout<<"Hitesh- Not Divisible by 5 or 3";
}