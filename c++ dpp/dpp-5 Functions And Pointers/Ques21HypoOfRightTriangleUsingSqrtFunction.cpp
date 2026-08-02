#include<iostream>
#include<cmath>
using namespace std;
double  hypotenuse(double base, double perpendicular){
    return sqrt(base*base + perpendicular*perpendicular);
}
int main(){
    double base,perpendicular;
    cin>>base>>perpendicular;
    double hypo = hypotenuse(base,perpendicular);
    cout<<hypo;
}