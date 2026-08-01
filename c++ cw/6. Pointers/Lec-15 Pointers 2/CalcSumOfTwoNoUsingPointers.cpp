#include<iostream>
using namespace std;
int sum(int* p1, int* p2){
    return *p1 + *p2;   
}
int main(){
    int n1,n2;
    cout<<"Enter Two Numbers : ";
    cin>>n1>>n2;
    int add = sum(&n1,&n2);
    cout<<add<<endl;
}