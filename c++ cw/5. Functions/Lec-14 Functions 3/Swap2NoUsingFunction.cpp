#include<iostream>
using namespace std;

//No Swap
// void swap(int a, int b){
//     int temp = a;
//     a = b;
//     b = temp;
// }

//Swap Using alias
void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    // No Swap
    int a,b;
    cout<<"Enter Two Numbers : ";
    cin>>a>>b;
    cout<<"a = "<<a<<" b = "<<b<<endl;
    // swap(a,b); //Built In Function
    swap(a,b);
    cout<<"a = "<<a<<" b = "<<b<<endl;
}