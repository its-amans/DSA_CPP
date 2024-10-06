#include<iostream>
using namespace std;


//Find Pivot Element In array


// //O(n)
// int returnPivot(int arr[],int n){
//     for(int i=0;i<n;i++){
//         if(arr[i] > arr[i+1]){
//             return arr[i];
//             break;
//         }
//     }
// }
// int main(){
//     int arr[]={7,8,1,3,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<< returnPivot(arr,n);
// }

//Two pointer approach still O(n)
// int returnPivot(int arr[],int n){
//     int s=0;
//     int i=0;
//     int e=n-1;
//    while(s<e){

//         if(arr[s] < arr[s+1]){
//             s++;
//         }
//         else if(arr[e] > arr[e-1]){
//             e--;
//         }
//         else{
//             return arr[e];
//         }
//     }
// }
// int main(){
//     int arr[]={7,8,1,3,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<< returnPivot(arr,n);
// }


// Binary Serach Method O(logn)
// int returnPivot(int arr[],int n){
//     int s=0;
//     int e=n-1;
//     int mid=s+(e-s)/2;
//    while(s<e){
//         if(arr[mid] > arr[0]){
//             s=mid+1;
//         }
//         else {
//             e=mid;
//         }
//         mid=s+(e-s)/2;
//     }
//     return arr[s];
// }
// int main(){
//     int arr[]={7,8,1,3,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<< returnPivot(arr,n);
// }



// SEARCH ELEMENT In Roatated Sorted Array
//O(logn)

// int findPivot(int arr[],int n){
//     int s=0;
//     int e=n-1;
//     int mid=s+(e-s)/2;
//    while(s<e){
//         if(arr[mid] > arr[0]){
//             s=mid+1;
//         }
//         else {
//             e=mid;
//         }
//         mid=s+(e-s)/2;
//     }
//     return s;
// }
// int binarySearch(int arr[],int s,int e,int k){
//     int mid=s+(e-s)/2;
//     while(s<=e){
//         if (arr[mid]==k)
//             return mid;
//         else if(arr[mid]>k)
//             e=mid-1;
//         else
//             s=mid+1;
//         mid=s+(e-s)/2;
//     }
//     return -1;
// }
// int SearchElement(int arr[],int n,int k,int pivot){
//     int s=0;
//     int e=n-1;
//     if(k>=arr[pivot] && k<=arr[n-1]){
//         cout<<"Index at :"<< binarySearch(arr,pivot,n-1,k);
//     }
//     else{
//         cout<<binarySearch(arr,0,pivot-1,k);
//     }
// }
// int main(){
//     int arr[]={7,8,1,3,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int k;
//     cout<<"Enter the Elements to Serach"<<endl;
//     cin>>k;
//     int pivot= findPivot(arr,n);
//     SearchElement(arr,n,k,pivot);
// }



//Sqrt of an integer 
//O(logn)

// int sqrtinteger(int k){
//     int s=1;
//     int e=k;
//     int ans=0;
//     long long int mid=s+(e-s)/2;

//     while(s<=e){
//         long long int square=mid*mid;
//         if(square==k){
//             return mid;
//         }
//         if(square<k){
//             s=mid+1;
//             ans=mid;
//         }
//         else{
//             e=mid-1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return ans;
// }
// int main(){
//     int i;
//     cout<<"Enter the number to fimd the square root "<<endl;
//     cin>>i;
//     cout<<sqrtinteger(i);
// }



// sqrt with more precision


// double morePrecision(int n,int precision,int tempsol){
//     double ans=tempsol;
//     double factor=1;

//     for(int i=0;i<precision;i++){
//         factor=factor/10;
//         for(double j=ans;j*j<n;j=j+factor){
//             ans=j;
//         }
//     }
//     return ans;
// }

// int sqrtinteger(int k){
//     int s=1;
//     int e=k;
//     int ans=0;
//     long long int mid=s+(e-s)/2;

//     while(s<=e){
//         long long int square=mid*mid;
//         if(square==k){
//             return mid;
//         }
//         if(square<k){
//             s=mid+1;
//             ans=mid;
//         }
//         else{
//             e=mid-1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return ans;
// }

// int main(){
//     int i;
//     cout<<"Enter the number to fimd the square root "<<endl;
//     cin>>i;
//     int p;
//     cout<<"Enter the precision decimal place: "<<endl;
//     cin>>p;
//     int tempsol=sqrtinteger(i);
//     cout<<morePrecision(i,p,tempsol);
// }