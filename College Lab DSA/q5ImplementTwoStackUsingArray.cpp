#include<iostream>
using namespace std;
void pushInStack1(int ele, int arr[], int& top1, int& top2){
    if(top2 == top1 + 1) cout<<"Array is Full!"<<endl;
    else arr[++top1] = ele;
}
void pushInStack2(int ele, int arr[], int& top1, int& top2){
    if(top2 == top1 + 1) cout<<"Array is Full!"<<endl;
    else arr[--top2] = ele;
}
void popFromStack1(int& top1){
    if(top1 == -1) cout<<"Stack Underflow!"<<endl;
    else top1--;
}
void popFromStack2(int n, int& top2){
    if(top2 == n) cout<<"Stack Underflow!"<<endl;
    else top2++;
}
void displayStack1(int arr[], int top1){
    if(top1 == -1){ cout<<"Stack is Empty!"<<endl; return; }
    cout<<"Stack1 : ";
    while(top1 != -1) cout<<arr[top1--]<<" ";
}
void displayStack2(int arr[], int n, int top2){
    if(top2 == n){ cout<<"Stack is Empty!"<<endl; return; }
    cout<<"Stack2 : ";
    while(top2 != n) cout<<arr[top2++]<<" ";
}
int main(){
    int n = 10, arr[n], top1 = -1, top2 = n, choice;
    while(true){
        cout<<"\n----- TWO STACK MENU -----"<<endl;
        cout<<"1. Push in Stack 1     2. Push in Stack 2     3. Pop from Stack 1"<<endl;
        cout<<"4. Pop from Stack 2    5. Display Stack 1     6. Display Stack 2"<<endl;
        cout<<"7. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:{
                int ele; cout<<"Enter Element: "; cin>>ele;
                pushInStack1(ele,arr,top1,top2);
                break;
            }
            case 2:{
                int ele; cout<<"Enter Element: "; cin>>ele;
                pushInStack2(ele,arr,top1,top2);
                break;
            }
            case 3: popFromStack1(top1); break;
            case 4: popFromStack2(n,top2); break;
            case 5: displayStack1(arr,top1); break;
            case 6: displayStack2(arr,n,top2); break;
            case 7: return 0;
            default: cout<<"Invalid Choice!"<<endl;
        }
    }
}