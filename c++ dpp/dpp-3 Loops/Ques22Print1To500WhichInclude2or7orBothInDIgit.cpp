#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=500;i++){
        int alt = i, temp = i;
        while(temp>0){
            int lastDigit = temp%10;
            if(lastDigit == 2 || lastDigit == 7){
                cout<<alt<<", ";
                break;
            }
            temp /= 10;
        }
    }
}