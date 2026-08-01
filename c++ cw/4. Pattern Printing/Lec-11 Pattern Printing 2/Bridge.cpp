#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number n : ";
    cin>>n;

    //First Row (2n-1) Stars
    for(int i=1;i<=2*n-1;i++){
        cout<<"* ";
    }
    cout<<endl;
    n--;
    //Ek Loop mei 3 loop
    for(int i=1;i<=n;i++){  //Stars (horizon flipped triangle)
        for(int j=1;j<=n-i+1;j++){
            cout<<"* ";
        }
        for(int j=1;j<=2*i-1;j++){ //Spaces (Odd Triangle)
            cout<<"  ";
        }
        for(int j=1;j<=n-i+1;j++){ //Stars (horizon flipped triangle)
            cout<<"* ";
        }
        cout<<endl;
    }
}