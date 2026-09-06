#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    // string str = "";
    // int alt = 0;
    // while(n > 0){
    //     alt = (alt * 10) + (n % 10);
    //     n /= 10;
    // }
    // while(alt > 0){
    //     str += char((alt%10) + 48);
    //     alt /= 10;
    // }
    // cout<<str;

    string str = to_string(n);
    cout<<str;
}