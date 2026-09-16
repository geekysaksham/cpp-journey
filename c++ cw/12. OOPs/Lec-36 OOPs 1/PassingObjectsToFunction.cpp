#include<iostream>
#include<string>
using namespace std;
class Student{
public:
    string name;
    int rno;
    float cgpa;

    Student(string n, int r, float c){
        name = n;
        rno = r;
        cgpa = c;
    }

    Student(){
        
    }

    void print(){
        cout<<name<<" "<<rno<<" "<<cgpa<<endl;
    }
};

void change(Student& s){
    s.name = "Tanay";
}

int main(){
    Student s1("Saksham", 50, 9.73);
    s1.print();


    change(s1);
    s1.print();
}