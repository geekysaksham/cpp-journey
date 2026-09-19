#include<iostream>
using namespace std;
class Student{
private:
    float cgpa;
public:
    string name;
    int rno;
    Student(string name, int rno, float cgpa){
        this->name = name;
        this->rno = rno;
        this->cgpa = cgpa;
    }
    Student(){

    }
    float getCgpa(){ //getter
        return cgpa;
    }
    void setCgpa(float newCgpa){ //setter
        cgpa = newCgpa;
    }
};
int main(){
    Student s1("Saksham", 50, 9.73);
    cout<<s1.getCgpa()<<endl;
    s1.setCgpa(7.89);
    cout<<s1.getCgpa()<<endl;
}