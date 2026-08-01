#include<iostream>
using namespace std;
// void fun(){           //Error Undeclared Identifier -> x
//     cout<<x<<endl;
// }
void change(int x){
    x = 20;
}
int main(){
    int x = 10;
    change(x);
    // fun();
    cout<<x<<endl;
}