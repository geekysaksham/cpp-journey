#include<iostream>
using namespace std;
int main(){
    if(5>3){
        int x = 7;
        cout<<x<<endl; //This will Execute Normally
    }
    // cout<<x<<endl; //This will give Error As x is defined in block only
}