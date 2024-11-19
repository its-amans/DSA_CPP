#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){
    bool swapped;
    for(int i=0; i<n; i++){
        swapped = false;
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}
void printarray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<< arr[i] << " "; 
    }
}
int main(){
    int arr[]={2,4,5,3,8,5,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);
    printarray(arr,n);
}