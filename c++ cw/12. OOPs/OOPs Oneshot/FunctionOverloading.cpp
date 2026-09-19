#include<iostream>
using namespace std;
class Loading{
public:
    void sum(string a, string b){
        cout<<a+b<<endl;
    }
    void sum(int a, int b){
        cout<<a+b<<endl;
    }
    void sum(int a, int b, int c){
        cout<<a+b+c<<endl;
    }
    // int sum(int a, int b){ //Error -> No Function overloading due to Only Change Return Type
    //     return a+b;
    // }
};
int main(){
    Loading a;
    a.sum(3,4);
    a.sum(5,4,2);
    a.sum("Saksham","Jain");
}