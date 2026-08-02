#include<iostream>
using namespace std;
int main(){
    double cu; //Consumption Unit
    cout<<"Enter Consumption Unit : ";
    cin>>cu;
    double extu1,extu2,rup; //extra unit 1,extra unit 2,rupees
    if(cu<0) cout<<"Invalid Consumption Units!";
    else if(cu<=100) rup=cu*1.725; // (cu*1.5)(1+0.15)
    else if(cu<=300){
        extu1=cu-100;
        rup=(60+extu1)*2.875; // (150+extu1*2.5)(1+0.15)
    }
    else{
        extu2=cu-300;
        rup=(162.5+extu2)*4.6;} // (650+ext2*4)*(1+0.15)
    if(cu>=0) cout<<"Net Bill Payable = "<<rup;
}