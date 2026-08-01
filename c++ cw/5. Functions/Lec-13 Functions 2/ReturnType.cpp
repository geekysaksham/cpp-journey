#include<iostream>
using namespace std;
int prod(int n1, int n2){
    int ans = n1*n2;
    return ans;
}
int main(){
    int x = prod(4,11);
    cout<<x<<endl;
}