#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"Enter Cost Price : ";
    cin>>cp;
    int sp;
    cout<<"Enter Selling Price : ";
    cin>>sp;
    if(cp<sp) cout<<"Incurred Profit = "<<sp-cp;
    else if(cp>sp) cout<<"Incurred Loss = "<<cp-sp;
    else cout<<"Incurred No Profit,No Loss";
}