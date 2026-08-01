#include<iostream>
using namespace std;
int main(){
    int rows,cols;
    cout<<"Enter Number Of Rows : ";
    cin>>rows;
    cout<<"Enter Number Of Columns : ";
    cin>>cols;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=cols;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}