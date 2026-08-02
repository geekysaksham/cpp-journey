#include<iostream>
using namespace std;
void sortTwo(int &a, int &b){
    if(a>b){
        int temp = a;
        a = b;
        b = temp;
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    sortTwo(a,b);
    cout<<a<<" "<<b;
}