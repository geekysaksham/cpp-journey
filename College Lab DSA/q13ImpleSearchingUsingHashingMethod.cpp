#include<iostream>
using namespace std;
int hashFunction(int key,int size){
    return (key%size+size)%size;
}
void insert(int table[],bool used[],int size,int key){
    int i=hashFunction(key,size);
    while(used[i]) i=(i+1)%size;
    table[i]=key;
    used[i]=true;
}
int search(int table[],bool used[],int size,int key){
    int i=hashFunction(key,size), start=i;
    while(used[i]){
        if(table[i]==key) return i;
        i=(i+1)%size;
        if(i==start) break;
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter Number of Elements: ";
    cin>>n;
    if(n<=0) return cout<<"Invalid Size!",0;
    int size=2*n+1, key;
    int *table=new int[size];
    bool *used=new bool[size]{};
    cout<<"Enter Array Elements: ";
    for(int i=0;i<n;i++){
        cin>>key;
        insert(table,used,size,key);
    }
    cout<<"Enter Element to Search: ";
    cin>>key;
    int idx=search(table,used,size,key);
    cout<<(idx==-1 ? "Element Not Found!" : "Element Found at Hash Index = ");
    if(idx!=-1) cout<<idx;
    delete[] table;
    delete[] used;
    return 0;
}