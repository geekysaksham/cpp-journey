#include<iostream>
using namespace std;
void fun(){
    cout<<"Hii"<<endl;
}

//ERROR
// void fun(int x = 87){
//     cout<<"Good Morning"<<endl;
// }

void fun(int x){
    cout<<"Good Morning"<<endl;
}

void fun(int x, int y){
    cout<<"Kese Ho Sushant"<<endl;
}

int main(){
    fun();
}
