#include<iostream>
#include<climits>
using namespace std;
// int gcd(int a, int b){
//     int mini = min(a,b);
//     for(int i=mini;i>0;i--){
//         if(a%i == 0 && b%i==0) return i;
//     }
//     return 1;
// }
int gcd(int a, int b){
    // if(a==0) return b;
    if(b%a == 0) return a;
    gcd(b%a,a);
}
int main(){
    int n1, n2;
    cout<<"Enter Number 1 : ";
    cin>>n1;
    cout<<"Enter Number 2 : ";
    cin>>n2;
    cout<<"HCF = "<<gcd(n1,n2);
}