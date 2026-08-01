#include<iostream>
using namespace std;
void sumOfThree(int a, int b, int c){
    cout<<"Sum = "<<a+b+c<<endl;
}
int main(){
    int x,y,z;
    cout<<"Enter Three Numbers : ";
    cin>>x>>y>>z;
    sumOfThree(x,y,z);
}