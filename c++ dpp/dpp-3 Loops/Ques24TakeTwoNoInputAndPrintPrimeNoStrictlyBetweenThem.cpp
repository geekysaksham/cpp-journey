#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    int n1, n2;
    cout<<"Enter Two Numbers : ";
    cin>>n1>>n2;
    int maxNum = max(n1,n2);
    int minNum = min(n1,n2);
    for(int i = minNum+1;i<maxNum;i++){
        int fact = 0;
        for(int j=2;j<=sqrt(i);j++){
            if(i%j == 0){
                fact++;
                break;
            }
        }
        if(fact == 0 && i != 1) cout<<i<<" ";
    }
}