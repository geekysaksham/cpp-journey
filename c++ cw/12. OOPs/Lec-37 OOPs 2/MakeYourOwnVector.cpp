#include<iostream>
using namespace std;
class MyVector{ //User Defined Data Structure
private:
    int length; //Kitne elements hai vector mei
    int* arr;
    int cap;
public:
    MyVector(int capacity, int defaultValue){
        length = cap = capacity;
        arr = new int[capacity];
        for(int i=0;i<capacity;i++){
            arr[i] = defaultValue;
        }
    }
    int capacity(){
        return cap;
    }
    int size(){
        return length;
    }
    void pop_back(){
        if(length == 0){
            cout<<"Vector is Empty!";
            return;
        }
        length -= 1;
    }
    void display(){
        for(int i=0;i<length;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    int get(int idx){
        if(idx < 0 || idx >= length){
            cout<<"Index out of bound!"<<endl;
            return -1;
        }
        return arr[idx];
    }
    void set(int idx, int val){
        if(idx < 0 || idx >= length){
            cout<<"Index out of bound!"<<endl;
            return;
        }
        arr[idx] = val;
    }
    void push_back(int val){
        if(cap == length){
            //double the capacity
            cap *= 2;
            int* temp = new int[cap];
            for(int i=0;i<length;i++){
                temp[i] = arr[i];
            }
            delete[] arr;
            arr = temp;
        }
        arr[length++] = val;
    }
};
int main(){
    MyVector v(5,-1); // {-1 -1 -1 -1 -1}; // vector<int> v(5,-1);
    // cout<<v.size()<<" "<<v.capacity()<<endl;
    v.display();
    v.pop_back();
    v.display();
    v.push_back(7);
    v.display();
    cout<<v.get(4)<<endl;
    v.set(2,19);
    v.display();
    // cout<<v.size()<<" "<<v.capacity()<<endl;

    // int arr[5];
    // int* a = new int[5];
    // a[0] = 10; arr[1] = 20;

    // int b[] = {67,21};
    // // int* ar = b;
    // a = b;

    // int x = 10;
    // int* p = new int(10);
}