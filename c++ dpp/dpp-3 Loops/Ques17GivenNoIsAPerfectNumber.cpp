#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    int sum = 0;
    for(int i=1;i<=sqrt(num);i++){
        if(num%i==0){
            sum += i;
            if(i != (num/i) && ((num/i) != num)) sum += (num/i);
        }
    }
    if(num == 1) cout<<"Not a Perfect Number";
    else if(sum == num) cout<<"Perfect Number";
    else cout<<"Not a Perfect Number";
}