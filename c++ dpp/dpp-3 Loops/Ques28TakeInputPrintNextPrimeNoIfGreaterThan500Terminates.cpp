#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    if(n>500) cout<<"Invalid Input";
    else{
        for(int i=n+1;;i++){
            int fact = 0;
            for(int j=2;j<=sqrt(i);j++){
                if(i%j == 0){
                    fact++;
                    break;
                }
            }
            if(i>1 && fact == 0){
                cout<<i;
                break;
            }
        }
    }
}