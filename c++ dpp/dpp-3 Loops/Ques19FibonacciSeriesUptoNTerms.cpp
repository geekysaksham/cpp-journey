#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number of Terms : ";
    cin>>num;
    int firstNum = 0, secondTerm = 1;
    if(num <= 0) cout<<"Invalid Number of Terms!";
    else if(num == 1) cout<<firstNum<<" ";
    else if(num == 2) cout<<firstNum<<" "<<secondTerm<<" ";
    else{
        cout<<firstNum<<" "<<secondTerm<<" ";
        for(int i=3;i<=num;i++){
            int nextNum = firstNum + secondTerm;
            cout<<nextNum<<" ";
            firstNum = secondTerm;
            secondTerm = nextNum;
        }
    }
}