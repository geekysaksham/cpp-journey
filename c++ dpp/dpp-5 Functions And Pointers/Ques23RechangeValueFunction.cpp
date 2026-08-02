#include<iostream>
#include<cmath>
using namespace std;
void updateValues(int *a, int *b){
    int temp1 = *a, temp2 = *b;
    *a += temp2;
    *b = abs(temp1-temp2);
}
int main(){
    int a,b;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    updateValues(&a,&b);
    cout<<"a = "<<a;
    cout<<", b = "<<b;
}