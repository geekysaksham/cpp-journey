#include<iostream>
#include<string>
using namespace std;
int main() {
     string str = "Saksham Jain";
     cout<<str[0]<<endl;
     str[0] = 'R';
     cout<<str<<endl;
     cout<<str.length()<<endl;
     cout<<str.size()<<endl;
}