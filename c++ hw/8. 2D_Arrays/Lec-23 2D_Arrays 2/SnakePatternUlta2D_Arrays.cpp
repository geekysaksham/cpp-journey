#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter Rows and Columns: ";
    cin>>m>>n;
    int arr[m][n];

    // Elements in Array
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    //Printing in ulta snake order
    for(int j=0;j<n;j++){
        if(j%2 == 0){
            for(int i=m-1;i>=0;i--) cout<<arr[i][j]<<" ";
        }
        else{
            for(int i=0;i<m;i++) cout<<arr[i][j]<<" ";
        }
    }
}