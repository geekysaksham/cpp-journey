#include<iostream>
using namespace std;
int main(){
    int s1,s2,s3;
    cout<<"Enter 1st Side : ";
    cin>>s1;
    cout<<"Enter 2nd Side : ";
    cin>>s2;
    cout<<"Enter 3rd Side : ";
    cin>>s3;
    if(s1<(s2+s3) && s2<(s3+s1) && s3<(s1+s2)) cout<<"Valid Triangle";
    else cout<<"Invalid Triangle";
}