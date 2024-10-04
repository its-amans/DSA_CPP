#include<iostream>
using namespace std;
#include<array>
#include<algorithm> // Include this header for std::swap

//Sum of the element of array

// int sumOfArray(int arr[],int n){
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum=sum+arr[i];
//     }
//     return sum;
// }
// int main(){
//     int arr[]={1,2,3,4,5,6,7};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<sumOfArray(arr,n);
// }


//Linear Search

// int linearSearch(int arr[],int n,int key){
//     for(int i=0;i<n;i++){
//         if(arr[i]==key){
//             return i ;
//         }
//     }
//     return -1;
// }
// int main(){
//     int arr[]={1,2,3,4,5,6,7};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int x=linearSearch(arr,n,10);
//     if(x==-1){
//         cout<<"Element is not present in the array";
//     }
//     else{
//         cout<<"Element is present at the index "<<x;
//     }
// }


//Reverse the array..

//...........Two pointer approach

// ...........You can print the array using the negative for loop.

// int reverse (int arr[],int n){
//     int s=0;
//     int e=n-1;
//     while(s<e){
//         //swap(arr[s],arr[e]) .//We can use this line instead of below three lines .
//         int temp=arr[s];
//         arr[s]=arr[e];
//         arr[e]=temp;
//         s++;
//         e--;
//     }
// }
// void printarray(int arr[],int n){
//     cout<<"The reversed array is :";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<< " ";
//     }
// }
//
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     reverse(arr,n);
//     printarray(arr,n);
// }


//swap alternate 

// void swapAlternate(int arr[],int n){
//     for(int i=0;i<n;i=i+2){
//         swap(arr[i],arr[i+1]);
//     }
// }

// void printarray(int arr[],int n){
//     cout<<"The alternate array is :";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<< " ";
//     }
// }

// int main(){
//     int arr[]={1,2,3,4,5,6,7,8};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     swapAlternate(arr,n);
//     printarray(arr,n);
// }


//Find unique Elemnets
//For single unique element only.

// int uniqueElements(int arr[],int n){
//     int result=0;
//     for(int i=0; i<n ;i++){
//         result^=arr[i];
//     }
//     return result;
// }

// int main(){
//     int arr[]={1,1,3,4,4};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     int x=uniqueElements(arr,n);
//     cout<<x;
// }

//For multiple unique elements and to return in array
// void multipleUniqueElements(int arr[], int n) {
//             for(int i = 0; i < n; i++) {
//                 int j;
//                 for(j = 0; j < n; j++) {
//                     if(arr[i] == arr[j] && i != j) {
//                         break;
//                     }
//                 }
//                 if(j == n) {
//                     cout << arr[i] << " ";
//                 }
//             }
//         }

//         int main() {
//             int arr[] = {1, 2, 3, 4, 3, 4};
//             int n = sizeof(arr) / sizeof(arr[0]);
//             multipleUniqueElements(arr, n);
//             return 0;
//         }


// ..............Best...............Another approach for multiple unique elements which ensures O(n) time complexity.
// #include <iostream>
// #include <unordered_map>
// using namespace std;

// void multipleUniqueElements(int arr[], int n) {
//     unordered_map<int, int> freq;

//     // Count the frequency of each element
//     for (int i = 0; i < n; i++) {
//         freq[arr[i]]++;
//     }

//     // Print elements that appear only once
//     for (int i = 0; i < n; i++) {
//         if (freq[arr[i]] == 1) {
//             cout << arr[i] << " ";
//         }
//     }
// }
// int main(){
//     int arr[]={1,2,3,4,3,4};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     multipleUniqueElements(arr,n);
// }

//For duplicate elements..

//Bruteforce approach.....Time Complexity O(n^2)

// void duplicateElements(int arr[],int n){
//     for(int i=0;i<n;i++){
//         int j;
//         for(j=i+1;j<n;j++){
//             if((arr[i]==arr[j]) && i!=j){
//                 cout<<arr[i]<< " ";
//                 break;
//             }
//             else{
//                 continue;
//             }
//         }
//     }
// }
// int main(){
//     int arr[]={1,2,3,4,3,4};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     duplicateElements(arr,n);
// }

// Using unordered map .... O(N)

// #include<unordered_map>
// void duplicateElements(int arr[],int n){
//     unordered_map<int ,int > freq;

//     for(int i=0;i<n;i++){
//         freq[arr[i]]++;
//     }
//     unordered_map<int, bool> printed;
//     for(int i=0;i<n;i++){
//         if(freq[arr[i]]>1 && !printed[arr[i]]){
//             cout<<arr[i]<<" ";
//             printed[arr[i]] = true;
//         }
//     }
// }
// int main(){
//     int arr[]={1,2,3,4,3,4};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     duplicateElements(arr,n);
// }

//Array Intersection

// int intersectionArray(int arr1[],int arr2[], int n1,int n2){
//         for(int i=0;i<n1;i++){
//             for(int j=0;j<n2;j++){
//                 if(arr1[i]==arr2[j]){
//                     cout<< arr1[i] <<" ";
//                 }
//             }
//         }
// }
// int main(){
//     int arr1[]={1,2,3,4,5,6};
//     int arr2[]={1,2,3};
//     int n1=sizeof(arr1)/sizeof(arr1[0]);
//     int n2=sizeof(arr2)/sizeof(arr2[0]);
//     intersectionArray(arr1,arr2,n1,n2);
// }


//PAIR sum

//Not good approach....Brute Force approach
// void pairSum(int arr[],int n,int s){
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if((arr[i]+arr[j])==s){
//                 cout<<arr[i]<<" "<<arr[j]<<endl;
//             }
//         }
//     }
// }
// int main(){
//     int arr[]={1,2,3,4,6};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     pairSum(arr,n,5);
// }



//Triplet Sum

//Not Good Approch .....Brute Force approach
// #include<iostream>
// using namespace std;
// void triplesum(int a[],int size){
//     int s;
//     cout<<"enter the number for triplet sum :";
//     cin>>s;
//     for(int i=0;i<size;i++){
//         for(int j=i+1;j<size;j++){
//             for(int k=j+1;k<size;k++){

//             if(((a[i]+a[j])+a[k])==s){
//              cout<<a[i]<<"  "<<a[j]<<" "<<a[k]<<" ";
//              exit(0);
//              // Here we cant use break bcz break will exit single loop only..
//             }
//         }
//     }
// }
// }
// int main(){
//     int a[]={1,5,3,2,0};
//     int size=sizeof(a)/sizeof(a[0]);
//     cout<<size;
    
    
//     //cout<<"the sorted array is";
//     //printarray( a,size);
//     triplesum(a,size);
//     //sort(a.begin(),a.end());

// }


//Sort 0 and 1

//Can replace inside while loop by if else if.....My thinking.

// void sortarr(int arr[],int n){
//     int i=0;
//     int j=n-1;
//     while(i<j){

//         //As left and right are changing and updating inside the loop thats why we chek this at each step.
//         while(arr[i]==0 && i<j){
//             i++;
//         }
//         while(arr[j]==1 && i<j){
//             j--;
//         }
//         if(i<j){    
//             swap(arr[i],arr[j] );
//             i++;
//             j--;
//         }
//     }
// }
// void printarray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[]={1,1,0,0,0,0,1,0};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     sortarr(arr,n);
//     printarray(arr,n);
// }