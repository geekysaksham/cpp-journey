#include<iostream>
#include<vector>
using namespace std;

class Scooty{
public:
    int topSpeed;
    float mileage;
    virtual void sound(){
        cout<<"Vroom Vroom"<<endl;
    }
private:
    int bootSpace;
};

class Bike : public Scooty{
public:
    int gears;
    void sound(){
        cout<<"Dhroom Dhroom"<<endl;
    }
};

class SuperBike : public Scooty{
public:
    void sound(){
        cout<<"Zroom Zroom"<<endl;
    }
};

int main(){
    // Bike* b = new Bike();
    // b->sound();

    Scooty* b = new Bike();
    b->sound();

    // SuperBike* c = new SuperBike();
    // c->sound();

    Scooty* c = new SuperBike();
    c->sound();

    // vector<Scooty*> v;
    // v.push_back(b);
    // v.push_back(c);
    // for(int i=0;i<v.size();i++){
    //     v[i]->sound();
    // }
}