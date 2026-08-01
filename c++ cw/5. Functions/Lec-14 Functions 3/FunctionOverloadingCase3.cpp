#include<iostream>
using namespace std;
void fun(int x, float y){
    cout<<"Hii"<<endl;
}

void fun(float y, int x){
    cout<<"Good Morning"<<endl;
}

//Error
// void fun(int x, char y){
//     cout<<"Hii"<<endl;
// }

// void fun(char y, int x){
//     cout<<"Good Morning"<<endl;
// }

int main(){
    fun(33.14,4);

}
