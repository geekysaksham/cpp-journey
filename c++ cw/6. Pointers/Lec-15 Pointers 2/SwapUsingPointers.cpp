#include<iostream>
using namespace std;
void swap(int* p1, int* p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
int main(){
    int n1,n2;
    cout<<"Enter Two Numbers : ";
    cin>>n1>>n2;
    cout<<"a = "<<n1<<" b = "<<n2<<endl;
    swap(&n1,&n2);
    cout<<"a = "<<n1<<" b = "<<n2<<endl;
}