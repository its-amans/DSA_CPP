#include<iostream>
using namespace std;

//Recursive approach Binary search

// int binarySearch(int arr[],int s,int e,int k){
//     if(s<=e){
//         int mid=s+(e-s)/2;
//         if(arr[mid]==k){
//             return mid;
//         }
//         else if(arr[mid]>k)
//             binarySearch(arr,s,mid-1,k);
//         else if(arr[mid]<k){
//             binarySearch(arr,mid+1,e,k);
//         }
//     }
//     return -1;
// }
// int main (){
//     int arr[]={1,2,3,4,5,6};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int k;
//     cout<<"Enter the number: "<<endl;
//     cin>>k;
//     int s=0;
//     int e=n-1;
//     cout<<binarySearch(arr,s,e,k);
// }


// Linear Search recursive approach

// int linearSearch(int arr[],int pos,int n,int k){
//     if(pos<n){
//         if(arr[pos]==k){
//             return pos;
//         }
//         else{
//             return linearSearch(arr,pos+1,n,k); //imp line
//             //here we are returning this to main func bcz pos is defined in main func and we are running thisfunc by modifying pos.
//         }
//     }
//     return -1;
// }

// int main (){
//     int arr[]={1,6,5,20,14,11,7};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int k;
//     cout<<"Enter the number: "<<endl;
//     cin>>k;
//     int pos=0;
//     cout<<linearSearch(arr,pos,n,k);
// }