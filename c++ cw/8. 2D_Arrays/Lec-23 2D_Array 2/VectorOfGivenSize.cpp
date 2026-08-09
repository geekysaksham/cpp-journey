#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter Rows: ";
    cin>>m;
    cout<<"Enter Cols: ";
    cin>>n;
    vector<vector<int>> arr(m,vector<int>(n,0));
    // Output
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}