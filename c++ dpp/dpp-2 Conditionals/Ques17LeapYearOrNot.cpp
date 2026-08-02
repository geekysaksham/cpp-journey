#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter Year : ";
    cin>>year;
    if(year<=0) cout<<"Invalid Year";
    else if(year%4==0 && year%100!=0) cout<<year<<" is a leap Year";
    else if(year%400==0) cout<<year<<" is a leap Year";
    else cout<<year<<" is not a leap Year";
}