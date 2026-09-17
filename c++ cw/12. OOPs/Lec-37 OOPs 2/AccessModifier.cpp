#include<iostream>
using namespace std;
class Cricketer{
private:
    string name;
    int runs;
    float average;
public:
    Cricketer(string name, int runs, float average){
        (*this).name = name;
        this->runs = runs;
        this->average = average;
    }
    void print(){
        cout<<name<<endl;
        cout<<runs<<endl;
        cout<<average<<endl;
    }
    // void changeName(string name){ //getter and setter
    //     this->name = name;
    // }
};
int main(){
    Cricketer* p = new Cricketer("Virat Kohli",14000,58.1);
    // p->changeName("Saksham Jain");
    p->print();
}