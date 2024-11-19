#include<iostream>
using namespace std;

void maxheapify(int arr[] ,int i,int n){
    int largest=i;
    int l=2*i+1;
    int r=2*i+2;
    if(l<n && arr[l]>arr[largest]){
        largest=l;
    }
    if(r<n && arr[r]>arr[largest]){
        largest=r;
    }

    if(largest != i){
        swap(arr[i],arr[largest]);
        maxheapify(arr,largest,n);
    }
}
void buildMaxHeap(int arr[],int n){
    for(int i=n/2-1 ;i>=0 ;i--){
        maxheapify(arr,i,n);
    }
}
void heapsort(int arr[] ,int n){
    buildMaxHeap(arr,n);

    for(int i=n-1;i>=0;i--){
        swap(arr[0],arr[i]);

        maxheapify(arr,0,i);
    }
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={2,1,4,5,3,9,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    heapsort(arr,n);
    printarray(arr,n);
}