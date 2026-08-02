#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    if(num<0) num=-num;
    int prod = 1;
    if(num==0) cout<<"Product Of Digits = 0";
    else{
            while(num != 0){
            int ld = num%10;
            prod *= ld;
            num /= 10;
        }
        cout<<"Product Of Digits = "<<prod;
    }
}