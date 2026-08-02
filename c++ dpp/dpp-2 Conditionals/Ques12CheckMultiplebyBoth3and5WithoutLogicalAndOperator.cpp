#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Positive Integer : ";
    cin>>num;
    if(num%3!=0 || num%5!=0) cout<<"Not Divisible by both 3 and 5";
    else{
        if(num%5==0) cout<<"Divisible by both 3 and 5";
        else cout<<"Not Divisible by both 3 and 5";
    }
    // if(num%15==0) cout<<"Divisible by both 3 and 5";
    // else cout<<"Not Divisible by both 3 and 5";
}