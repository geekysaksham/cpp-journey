#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter Two Numbers : ";
    cin>>a>>b;
    cout<<"a = "<<a<<" b = "<<b<<endl;

    //One Liner
    // a = (a+b) - (b=a);

    //Mental Maths
    // a = a + b;
    // b = a - b;
    // a = a - b;

    //Extra Variable
    int temp = a;
    a = b;
    b = temp;

    cout<<"a = "<<a<<" b = "<<b<<endl;
}