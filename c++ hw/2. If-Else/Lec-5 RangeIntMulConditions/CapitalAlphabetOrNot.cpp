#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a Alphabet : ";
    cin>>ch;
    if((int)ch>64 && (int)ch<91) cout<<ch<<" is a Capital Letter";
    else cout<<ch<<" is Not a Capital Letter";
}