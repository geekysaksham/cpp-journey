#include<iostream>
#include<string>
using namespace std;
class Student{
public:
    string name;
    int rno;
    float cgpa;

    Student(int r){ //Parameterised Constructor
        rno = r;
    }

    Student(string n, int r){ //Parameterised Constructor
        name = n;
        rno  = r;
    }

    Student(string n, int r, float c){ //Parameterised Constructor
        name = n;
        rno  = r;
        cgpa = c;
    }

    Student(int r, float c, string n){ //Parameterised Constructor
        name = n;
        rno = r;
        cgpa = c;
    }

    Student(){ //Default Constructor

    }
};

int main(){
    Student s1;
    s1.name = "Saksham Jain";
    s1.rno = 50;
    s1.cgpa = 9.73;

    Student s2("Himanshu", 88);
    // s2.name = "Himanshu";
    // s2.rno = 88;
    s2.cgpa = 6.3;
    cout<<s2.name<<endl;

    Student s3("Gagan", 13, 9.3);
    Student s3(34, 5.8, "Harish");
    cout<<s3.name<<" "<<s3.rno<<" "<<s3.cgpa<<endl;

    Student s4(34);
    Student s6 = s4; //Deep Copy

    Student s7(s1); //Copy Constructor -> Deep Copy
}