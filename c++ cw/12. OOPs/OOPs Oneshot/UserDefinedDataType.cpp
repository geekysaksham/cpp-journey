#include<iostream>
#include<string>
using namespace std;
class Student{
public:
    string name;
    int rno;
    float cgpa;
};

int main(){
    Student s1;
    s1.name = "Saksham";
    s1.rno = 50;
    s1.cgpa = 9.73;

    Student s2;
    s2.name = "Himanshu";
    s2.rno = 88;
    s2.cgpa = 6.3;

    // cout<<s1.name<<endl;
    // cout<<s1.rno<<endl;
    // cout<<s1.cgpa<<endl;

    // cout<<s2.name<<endl;
    // cout<<s2.rno<<endl;
    // cout<<s2.cgpa<<endl;

    cout<<s1.name<<" "<<s1.rno<<" "<<s1.cgpa<<endl;
    cout<<s2.name<<" "<<s2.rno<<" "<<s2.cgpa<<endl;
}