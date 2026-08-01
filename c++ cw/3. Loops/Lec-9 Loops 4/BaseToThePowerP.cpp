#include<iostream>
using namespace std;
int main(){
    int BaseNum;
    cout<<"Enter Base Number : ";
    cin>>BaseNum;
    int power;
    cout<<"Enter Power : ";
    cin>>power;
    int ans = 1;
    for(int i=1;i<=power;i++){
        if(BaseNum == 1 || BaseNum == 0) break;
        ans *= BaseNum;
    }
    if(BaseNum == 0 && power == 0) cout<<"Indeterminant Form";
    else if(BaseNum == 0) cout<<"Answer Of "<<BaseNum<<" Raised to the Power "<<power<<" = "<<0;
    else cout<<"Answer Of "<<BaseNum<<" Raised to the Power "<<power<<" = "<<ans;
}