#include<iostream>
#include<algorithm>
using namespace std;
void print(int arr[], int n){
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
}
void bubbleSort(int arr[], int n){
    for(int j=1;j<n;j++)
        for(int i=0;i<n-j;i++)
            if(arr[i]>arr[i+1]) swap(arr[i],arr[i+1]);
}
void selectionSort(int arr[], int n){
    for(int j=0;j<n-1;j++){
        int mindx=j;
        for(int i=j+1;i<n;i++)
            if(arr[i]<arr[mindx]) mindx=i;
        swap(arr[mindx],arr[j]);
    }
}
void insertionSort(int arr[], int n){
    for(int i=1;i<n;i++){
        int j=i;
        while(j!=0 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
}
void mergeTwoSortedArrays(int a[],int n1,int b[],int n2,int c[]){
    int i=0,j=0,k=0;
    while(i<n1 && j<n2)
        c[k++]=(a[i]<b[j])?a[i++]:b[j++];
    while(i<n1) c[k++]=a[i++];
    while(j<n2) c[k++]=b[j++];
}
void mergeSort(int arr[], int n){
    if(n<=1) return;
    int v1[n/2],v2[n-n/2],k=0;
    for(int i=0;i<n/2;i++) v1[i]=arr[k++];
    for(int i=0;i<n-n/2;i++) v2[i]=arr[k++];
    mergeSort(v1,n/2);
    mergeSort(v2,n-n/2);
    mergeTwoSortedArrays(v1,n/2,v2,n-n/2,arr);
}
int partition(int arr[],int start,int end){
    int pivot=arr[end],i=start-1;
    for(int j=start;j<end;j++)
        if(arr[j]<pivot) swap(arr[++i],arr[j]);
    swap(arr[i+1],arr[end]);
    return i+1;
}
void quickSort(int arr[],int start,int end){
    if(start>=end) return;
    int p=partition(arr,start,end);
    quickSort(arr,start,p-1);
    quickSort(arr,p+1,end);
}
void heapify(int arr[],int n,int i){
    int largest=i,left=2*i+1,right=2*i+2;
    if(left<n && arr[left]>arr[largest]) largest=left;
    if(right<n && arr[right]>arr[largest]) largest=right;
    if(largest!=i){
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}
void heapSort(int arr[],int n){
    for(int i=n/2-1;i>=0;i--) heapify(arr,n,i);
    for(int i=n-1;i>0;i--){
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }
}
int main(){
    int n,ch;
    cout<<"Enter Array Size: ";
    cin>>n;
    if(n<=0){
        cout<<"Invalid Array Size!";
        return 0;
    }
    int arr[n];
    cout<<"Enter Array Elements: ";
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<"\n1.Selection Sort  2.Bubble Sort  3.Insertion Sort\n";
    cout<<"4.Merge Sort      5.Quick Sort   6.Heap Sort\n\n";
    cout<<"Enter Choice: ";
    cin>>ch;
    print(arr,n);
    switch(ch){
        case 1: selectionSort(arr,n); break;
        case 2: bubbleSort(arr,n); break;
        case 3: insertionSort(arr,n); break;
        case 4: mergeSort(arr,n); break;
        case 5: quickSort(arr,0,n-1); break;
        case 6: heapSort(arr,n); break;
        default: cout<<"Invalid Choice!"<<endl;
    }
    if(ch>=1 && ch<=6) print(arr,n);
}