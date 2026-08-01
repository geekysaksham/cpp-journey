#include<iostream>
using namespace std;
void change(int* ptr){
    *ptr = 20;
}
int main(){
    int x = 10;
    change(&x);
    cout<<x<<endl;
}