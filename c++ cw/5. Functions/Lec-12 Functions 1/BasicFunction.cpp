#include<iostream>
using namespace std;
void sumit(){
    cout<<"Hii Sumit"<<endl;
}
void arjun(){
    sumit();
    cout<<"Hii Arjun"<<endl;
}
void anu(){
    cout<<"Hii Anu"<<endl;
    arjun();
}
int main(){
    anu();
}