#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    int count=0;
    if(num==0) count++;
    while(num != 0){
        num/=10;
        count++;
    }
    cout<<"No. Of Digits = "<<count;
}