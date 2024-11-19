#include<iostream>
using namespace std;
void merge(int arr[], int s, int e, int mid){
    int n1 = mid - s + 1;
    int n2 = e - mid;
    int a1[n1];
    int a2[n2];
    for(int i=0;i<n1;i++){
        a1[i]=arr[s+i];
    }
    for(int i=0;i<n2;i++){
        a2[i]=arr[mid+1+i];
    }
    int i=0,j=0,k=s;
    while(i<n1 && j<n2){
        if(a1[i]<a2[j]){
            arr[k]=a1[i];
            i++;
        }
        else{
            arr[k]=a2[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=a1[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=a2[j];
        j++;
        k++;
    }
    
}
void mergesort(int arr[], int l, int r){
    if(l>=r){
        return;
    }
    int mid=l+(r-l)/2;
    mergesort(arr,l,mid);
    mergesort(arr,mid+1,r);
    merge(arr,l,r,mid);

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
    mergesort(arr,s,e);
    printarray(arr,n);
}