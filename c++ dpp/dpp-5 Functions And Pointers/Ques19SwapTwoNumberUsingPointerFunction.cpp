#include<iostream>
using namespace std;
void swapNumbers(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    swapNumbers(&n1,&n2);
    cout<<n1<<" "<<n2;
}