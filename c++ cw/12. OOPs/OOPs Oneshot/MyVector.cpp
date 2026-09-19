#include<iostream>
using namespace std;
class Vector{
public:
    int size;
    int capacity;
    int* arr;

    Vector(){
        size = 0;
        capacity = 1;
        arr = new int[1];
    }
    void push_back(int ele){
        if(size == capacity){
            capacity *= 2;
            int* arr2 = new int[capacity];
            for(int i=0;i<size;i++){
                arr2[i] = arr[i];
            }
            arr = arr2;
        }
        arr[size] = ele;
        size += 1;
    }

    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    int get(int idx){
        if(size == 0){
            cout<<"Array is Empty"<<endl;
            return -1;
        }
        else if(idx >= size || idx < 0){
            cout<<"Invalid Index"<<endl;
            return -1;
        }
        return arr[idx];
    }

    void pop_back(){
        if(size == 0) cout<<"Array is Empty"<<endl;
        else size--;
    }
};
int main(){
    Vector v1;
    // cout<<v1.size<<" "<<v1.capacity<<endl;
    v1.push_back(6);
    // cout<<v1.size<<" "<<v1.capacity<<endl;
    v1.print();
    v1.push_back(9);
    // cout<<v1.size<<" "<<v1.capacity<<endl;
    v1.print();
    v1.pop_back();
    v1.print();
}