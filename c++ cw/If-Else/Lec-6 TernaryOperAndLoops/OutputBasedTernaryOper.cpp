#include<iostream>
using namespace std;
int main(){
    int x = 6;
    int y = (x++ > 12) ? x-4 : x*4;
    cout<<y;
}