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
    if(s1>0 && s2>0 && s3>0 && (s1<(s2+s3) && s2<(s3+s1) && s3<(s1+s2))){
        cout<<"Valid Triangle ------> ";
        if(s1==s2 && s2==s3) cout<<"It's an Equilateral Triangle";
        else if(s1==s2 || s2==s3 || s3==s1) cout<<"It's an Isosceles Triangle";
        else cout<<"It's a Scalene Triangle";
    }
    else{
        cout<<"Invalid Triangle";
    }
}