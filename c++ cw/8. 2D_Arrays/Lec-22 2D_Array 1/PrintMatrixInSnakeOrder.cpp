#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter Rows and Columns: ";
    cin>>r>>c;
    cout<<"Enter 2D_Array Elements: ";
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<r;i++){
        if(i%2 == 0){
            for(int j=0;j<c;j++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int j=c-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}