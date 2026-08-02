#include<iostream>
using namespace std;
int main(){
    cout<<endl<<"Ceiling Division"<<endl;
    int a,b; //numerator,denominator
    cout<<"Enter a = ";
    cin>>a;
    cout<<"Enter b = ";
    cin>>b;
    if(a%b==0) cout<<"Required Answer = "<<a/b;
    else if( (a>0 && b<0) || (a<0 && b>0) ) cout<<"Required Answer = "<<a/b;
    else cout<<"Required Answer = "<<(a/b) + 1;
}