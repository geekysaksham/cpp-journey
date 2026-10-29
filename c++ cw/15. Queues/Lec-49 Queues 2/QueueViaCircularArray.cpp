#include<iostream>
#include<vector>
using namespace std;
class MyQueue{
private:
    int f;
    int r;
    int length;
    vector<int> arr;
public:
    MyQueue(int capacity){
        f = 0;
        r = 0;
        length = 0;
        arr.resize(capacity,0);
    }
    int size(){return length;}
    int front(){
        if(length == 0){
            cout<<"Queue is Empty!"<<endl;
            return -1;
        }
        return arr[f];
    }
    int capacity(){return arr.size();}
    void push(int val){
        if(length == arr.size()){
            cout<<"Queue is Full!"<<endl;
            return;
        }
        if(r == arr.size()-1){
            arr[r] = val;
            r = 0;
        }
        else arr[r++] = val;
        length++;
    }
    void pop(){
        if(length == 0){
            cout<<"Queue is Empty!"<<endl;
            return;
        }
        if(f == arr.size()-1) f = 0;
        else f++;
        length--;
    }
    void display(){
        if(length == 0){
            cout<<"Queue is Empty!"<<endl;
            return;
        }
        if(r <=f){ //special first -> f to end   second -> 0 to r 
            for(int i=f;i<arr.size();i++){
                cout<<arr[i]<<" ";
            }
            for(int i=0;i<r;i++){
                cout<<arr[i]<<" ";
            }
        }
        else{ // r > f
            for(int i=f;i<r;i++){
                cout<<arr[i]<<" ";
            }
        }
        cout<<endl;
    }
};
int main(){
    // MyQueue q(5);
    // q.push(10);
    // q.push(20);
    // q.push(30);
    // q.display(); // 10 20 30
    // q.pop();
    // q.push(40);
    // q.push(50);
    // q.display(); // 20 30 40 50
    // q.pop();
    // q.push(60);
    // q.display(); // 30 40 50 60

    MyQueue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.display();
    q.push(40);
    q.push(50);
    q.push(60);
    q.display();
    cout<<q.size()<<endl;

    q.pop();
    q.pop();
    q.display();
    q.push(70);
    q.push(80);
    q.display();
    cout<<q.front()<<endl;

    cout<<q.size()<<endl;
    cout<<q.capacity()<<endl;
    q.pop();
    q.display();
    q.push(90);
    q.display();
}