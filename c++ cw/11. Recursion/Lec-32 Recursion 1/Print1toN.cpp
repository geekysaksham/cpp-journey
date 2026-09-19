#include<iostream>
using namespace std;

// void print(int n){
//     if(n==0) return;
//     print(n-1);
//     cout<<n<<" ";
// }
void print(int starter, int n){ //2 Parameters
    if(starter == n+1) return;
    cout<<starter<<" ";
    print(starter+1, n);
}
int main(){
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    print(1, num);
}