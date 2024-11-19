#include<iostream>
using namespace std;
int partition(int arr[], int s, int e){
    int x = arr[s];
    int i=s;
    for( int j=s+1; j <= e ; j++){
        if(arr[j] < x){
            i++;
            swap(arr[i] , arr[j]);
        }
    }
    swap(arr[i] , arr[s]);
    return i;
}
void quicksort(int arr[], int s, int e){
    if(s>=e){
        return;
    }
    int pivotindex = partition(arr,s,e);
    quicksort(arr,s,pivotindex-1);
    quicksort(arr,pivotindex+1,e);
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
    int s=0;
    int e=n-1;
    quicksort(arr,s,e);
    printarray(arr,n);
}