#include<iostream>
#include<string>
using namespace std;
class Pokemon{
public:
    string name;
    string type;
    int hp;

    Pokemon(string name, string type, int hp){
        this->name = name;
        this->type = type;
        this->hp = hp;
    }

    // Pokemon(){

    // }

    void print(){
        cout<<name<<" "<<type<<" "<<hp<<endl;
    }
};
int main(){
    Pokemon p1("Pikachu", "Electric", 70);
    Pokemon p2("Charizard", "Fire", 120);
    Pokemon p3("Mewtwo", "Psychic", 200);
    p3.print();
}