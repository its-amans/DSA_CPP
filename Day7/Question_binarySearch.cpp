#include<iostream>
using namespace std;

// //First and Last Occurence


// int firstOccurence(int arr[],int s,int e,int k){
//     int mid;
//     int ans=-1;
//     while(s<=e){
//         mid=s+(e-s)/2;
//         if(arr[mid]==k){
//             ans=mid;
//             e=mid-1;
//         }
//         else if(k<arr[mid]){
//             e=mid-1;
//         }
//         else{
//             s=mid+1;
//         }
//     }
//     return ans;
// }
// int lastOccurence(int arr[],int s,int e,int k){
//     int mid;
//     int ans=0;
//     while(s<=e){
//         mid=s+(e-s)/2;
//         if(arr[mid]==k){
//             ans=mid;
//             s=mid+1;
//         }
//         else if(k<arr[mid]){
//             e=mid-1;
//         }
//         else{
//             s=mid+1;
//         }
//     }
//     return ans;
// }
// int main(){
//     int arr[]={0,0,1,1,2,2,2,2};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int s=0;
//     int e=n-1;
//     int k;
//     cout<<"Enter the key :"<<endl;
//     cin>>k;
//     cout<<"Occurence is :" <<(lastOccurence(arr,s,e,k)+1)-firstOccurence(arr,s,e,k);
// }


//Peak Element in mountain array ....Easy

int PeakElement(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){ //Here s=e will be repeated again again so not taken
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return arr[mid];
}
int main(){
    int arr[]={0,2,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<PeakElement(arr,n);
}
