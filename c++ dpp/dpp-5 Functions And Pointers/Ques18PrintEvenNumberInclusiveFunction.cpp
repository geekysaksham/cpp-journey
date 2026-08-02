#include<iostream>
using namespace std;
void printEven(int start, int end){
    for(int i = start;i<=end;i++){
        if(i%2==0) cout<<i<<" ";
    }
}
int main(){
    int first, last;
    cout<<"Enter Starting And Ending Number : ";
    cin>>first>>last;
    printEven(first,last);
}