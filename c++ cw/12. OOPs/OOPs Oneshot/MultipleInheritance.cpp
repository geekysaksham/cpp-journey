#include<iostream>
using namespace std;
class Cricketer{
public:
    int runs;
    int wickets;
    int average;
};
class Engineer{
    int experience;
    string domain;
};
class Phodu : public Engineer, Cricketer{ // Multiple Inheritance
public:
    string name;
};
int main(){

}