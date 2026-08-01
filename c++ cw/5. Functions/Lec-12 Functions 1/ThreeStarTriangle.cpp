#include<iostream>
using namespace std;
void starTriangle(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    int x,y,z;
    cout<<"Enter Three Numbers : ";
    cin>>x>>y>>z;
    starTriangle(x);
    starTriangle(y);
    starTriangle(z);
}