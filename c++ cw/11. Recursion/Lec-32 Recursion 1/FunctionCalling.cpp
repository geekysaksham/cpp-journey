#include<iostream>
using namespace std;
void aryan(){
    cout<<"Aryan"<<endl;
}
void param(){
    aryan();
    cout<<"Param"<<endl;
    aryan();
}
void kartik(){
    aryan();
    cout<<"Kartik"<<endl;
    param();
}
int main(){
    kartik();
    param();
    aryan();
}

//kartik param aryan param aryan aryan
// aryan kartik aryan param aryan aryan param aryan aryan