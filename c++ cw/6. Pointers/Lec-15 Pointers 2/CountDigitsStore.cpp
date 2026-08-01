#include<iostream>
using namespace std;
void CountDigit(int n, int* ptr){
    int count = (n==0) ? 1 : 0;
    while(n != 0){
        count++;
        n /= 10;
    }
    *ptr = count;
}
int main(){
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    int count;
    CountDigit(num,&count);
    cout<<"Number Of Digits = "<<count<<endl;
}