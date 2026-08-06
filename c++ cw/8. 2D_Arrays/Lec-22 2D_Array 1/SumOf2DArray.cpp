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
    int sum = 0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum += arr[i][j];
        }
    }
    cout<<"Sum Of Elements in 2D_Array = "<<sum;
}