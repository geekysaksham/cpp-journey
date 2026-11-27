#include<iostream>
using namespace std;
struct Element{
    int row;
    int column;
    int value;
};
int main(){
    int r, c;
    cout<<"Enter Number Of Rows: ";
    cin>>r;
    cout<<"Enter Number Of Columns: ";
    cin>>c;
    int arr[r][c];
    // Read array elements from user
    cout<<"Enter Array Elements: ";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    // Array of structure for sparse matrix
    Element sparse[r*c];
    int sparePointer = 0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j] != 0){
                sparse[sparePointer].row = i;
                sparse[sparePointer].column = j;
                sparse[sparePointer].value = arr[i][j];
                sparePointer++;
            }
        }
    }
    // Print final sparse array
    cout<<"Sparse Matrix: "<<endl;
    cout<<"Row    Column    Value"<<endl;
    for(int i=0;i<sparePointer;i++){
        cout<<sparse[i].row<<"         "<<sparse[i].column<<"         "<<sparse[i].value;
        cout<<endl;
    }
}