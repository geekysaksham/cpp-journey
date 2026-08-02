#include<iostream>
using namespace std;
void  changeTarget(int** ptr, int* newAddress){
    *ptr = newAddress;
}
int main(){
    int a,b;
    cin>>a>>b;
    int *p = &a;
    int **p3 = &p;
    changeTarget(p3,&b);
    cout<<*p;
}