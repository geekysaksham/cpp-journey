#include<iostream>
using namespace std;
int main(){
    double mp,d,t; //Marked Price,discount,tax
    cout<<"Enter Marked Price : ";
    cin>>mp;
    cout<<"Enter Discount : ";
    cin>>d;
    cout<<"Enter Tax : ";
    cin>>t;
    double dp = mp - (mp*d)/100; //Discounted Price
    double FinalAmount = dp*(1 + t/100); // dp + (dp*t)/100;
    cout<<"Final Payable Amount = "<<FinalAmount;
}