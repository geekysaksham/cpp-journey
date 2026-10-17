#include<iostream>
using namespace std;
bool PowerOfThree(int n){
    if(n<=0) return false;
    if(n==1) return true;
    if(n%3 == 0) return PowerOfThree(n/3);
    else return false;
}
int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    if(PowerOfThree(n) == 1) cout<<"Is "<<n<<" Power Of Three = true";
    else cout<<"Is "<<n<<" Power Of Three = false";
}