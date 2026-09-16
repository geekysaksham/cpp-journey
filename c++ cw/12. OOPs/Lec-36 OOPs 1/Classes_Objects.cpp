#include<iostream>
#include<string>
using namespace std;
class Student{ //User Defined Data Type
public:
    string name;
    int rno;
    float cgpa;
    //Contructor Overloading
    Student(string n, int r, float c){ //Parameterised Constructor
        name = n;
        rno = r;
        cgpa = c;
    }

    Student(int r, float c, string n){ //Parameterised Constructor
        name = n;
        rno = r;
        cgpa = c;
    }

    // Student(){ //Default Constructor
        
    // }
};

int main(){

    // Student x; //x is an object/variable
    // x.name = "Saksham";
    // x.rno = 50;
    // x.cgpa = 9.73;

    Student x(50, 9.73, "Saksham");

    Student y("Sumit", 39, 8.7);

    cout<<y.name<<" "<<y.rno<<" "<<y.cgpa<<endl;
}