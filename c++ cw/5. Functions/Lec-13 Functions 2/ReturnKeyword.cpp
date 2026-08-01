#include<iostream>
using namespace std;
void fun(int n){
    cout<<n<<endl;
    if(n>20) return;
    cout<<n*n<<endl;
}
int main(){
    fun(27);
}