#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    int ReqNum;
    int rem = num%7;
    if(rem==0) ReqNum=0;
    else if(num<0) ReqNum = -1 * rem;
    else ReqNum = 7 - rem;
    cout<<"Minimum Non-Negative Integer To Add For Divisible by 7 = "<<ReqNum;
}