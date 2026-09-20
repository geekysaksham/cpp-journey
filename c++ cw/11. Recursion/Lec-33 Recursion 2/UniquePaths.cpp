#include<iostream>
using namespace std;
void printWays(int i, int j, int m, int n,string str){
    if(i>m-1 || j>n-1) return;
    if(i==m-1 && j==n-1){
        cout<<str<<endl;
        return;
    }
    printWays(i,j+1,m,n,str+'R');
    printWays(i+1,j,m,n,str+'D');
}
int main(){
    int m,n;
    cout<<"Enter Number Of Rows : ";
    cin>>m;
    cout<<"Enter Number Of Columns : ";
    cin>>n;
    printWays(0,0,m,n,"");

}