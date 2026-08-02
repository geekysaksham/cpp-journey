#include<iostream>
using namespace std;
double balance = 0.0;
void  deposit(double amount){
    balance += amount;
}
void  withdraw(double amount){
    balance -= amount;
}
int main(){
    double depo,with;
    cout<<"Enter Deposit Money : ";
    cin>>depo;
    deposit(depo);
    cout<<"Enter Withdraw Money : ";
    cin>>with;
    withdraw(with);
    cout<<"Balance : "<<balance;
}