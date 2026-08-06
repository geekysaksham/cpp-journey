#include<iostream>
#include<climits>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter Rows and Columns: ";
    cin>>r>>c;
    cout<<"Enter 2D_Array Elements: ";
    int arr[r][c], maxSum = INT_MIN, maxRow = -1;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<r;i++){
        int sum = 0;
        for(int j=0;j<c;j++){
            sum += arr[i][j];
        }
        if(sum > maxSum){
            maxSum = sum;
            maxRow = i;
        }
    }
    cout<<"Maximum Sum = "<<maxSum<<", At Row = "<<maxRow;
}