#include <iostream>
using namespace std;
void selectionSort(int arr[],int n){
    for(int i=0; i<n; i++){
        int minindex= i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[minindex]){
                minindex=j;
            }
        }
        swap(arr[minindex],arr[i]);
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
    selectionSort(arr,n);
    printarray(arr,n);
}