#include<iostream>
using namespace std;

// *
// **
// ***
// ****
// *****
// int main(){
// int n;
// cout<<"Enter the no of lvels ";
// cin>>n;
// int i=0;
// while(i<n){
//     int j=0;
//     while(j<=i){
//         cout<<"* ";
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
// }
// }



/*
111
222
333
*/
// int main(){
// int n=3;
// int i=1;
// while(i<=n){
//     int j=1;
//     while(j<=n){
//         cout<<i;
//         j=j+1;
//     }
//     i+=1;
//     cout<<endl;
// }
// }


// 4321
// 4321
// 4321
// 4321 

// int main(){
//     int n=5;
//     int i=0;
//     while(i<n){
//         int j=n;
//         while(j>0){
//             cout<<j<<" ";
//             j=j-1;
//         }
//         i=i+1;
//         cout<<endl;
//     }
// }



// 1111
// 222
// 33
// 4

// int main(){
//     int n=5;
//     int i=1;
//     while(i<=n){
//         int j=n-i;
//         while(j>=0){
//             cout<<i<<" ";
//             j=j-1;
//         }
//         i=i+1;
//         cout<<endl;
//     }
// }


//not running same problem
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n)
//     {
//         int j=i;
        
//         while(j<=n)
//         {cout<<i;
//         j++;
//         }
//         cout<<endl;
//         i++;

//     }
// }

/*
1
2 3
4 5 6
7 8 9 10
*/

// int main(){
//     int n=5;
//     int i=1;
//     int k=1;
//     while(i<=n){
//         int j=i;
//         while(j>0){
//             cout<<k<<" ";
//             j--;
//             k++;
//         }
//         i++;
//         cout<<endl;
//     }
// }

// 1
// 21
// 321
// 4321

// int main(){
//     int n=5;
//     int i=1;
//     while(i<=n){
//         int j=i;
//         while(j>0){
//             cout<<j<<" ";
//             j--;
//         }
//         i++;
//         cout<<endl;
//     }
// }

/*
AAA
BBB
CCC
*/
// int main(){
//     int n=5;
//     int i=1;
//     char k='A';
//     while(i<=n){
//         //Using Decrement 
//         // int j=n;
//         // while(j>0){
//         //     cout<<k<<" ";
//         //     j--;
//         // }
//         //using increment
//         int j=0;
//         while(j<=n){
//             cout<<k<<" ";
//             j++;
//         }
//         k++;
//         i++;
//         cout<<endl;
//     }
// }

// ABC
// ABC
// ABC

// int main(){
//     int n=5;
//     int i=1;
//     while(i<=n){
//         int j=n;
//         char k='A';
//         while(j>0){
//             cout<<k<<" ";
//             k++;
//             j--;
//         }
//         i++;
//         cout<<endl;
//     }
// }

//pattern13
/*
     *
    **
   ***
  ****
*/

// int main(){
//     int n=5;
//     int i=0;
//     while(i<n){
//         int j=n-i;
//         while(j>0){
//             cout<<" ";
//             j--;
//         }
//         int k=i;
//         while(k>0){
//             cout<<"*";
//             k--;
//         }
//         i++;
//         cout<<endl;
//     }
// }

/*
****
***
**
*
*/

// int main(){
//     int n=5;
//     int i=1;
//     while(i<=n){
//         int k=n-i+1;
//         while(k>0){
//             cout<<"*";
//             k--;
//         }
//         i++;
//         cout<<endl;
//     }
// }

/*
*****
 ****
  ***
   **
    *
 */

// int main(){
//     int n=5;
//     int i=1;
//     while(i<=n){
//         int j=i-1;
//         while(j>0){
//             cout<<" ";
//             j--;
//         }
//         int k=n-i+1;
//         while(k>0){
//             cout<<"*";
//             k--;
//         }
//         i++;
//         cout<<endl;
//     }
// }


//pattern16
/*
          1
         121
        12321
       1234321
*/

// int main(){
//   int n=5;
//   int i=1;
//   while(i<n){
//     int j=n-i+1;
//     while(j>0){
//       cout<<" ";
//       j--;
//     }
//     int k=1;
//     while(k<=i){
//       cout<<k;
//       k++;
//     }
//     int l=1;
//     while(l<i){
//       cout<<l;
//       l++;
//     }
//     i++;
//     cout<<endl;
//   }
// }

/*
1234554321
1234**4321
123****321
12******21
1********1
*/


// int main(){
//   int n=5;
//   int i=0;
//   while(i<n){
//     int j=1;
//     while(j<=n-i){
//       cout<<j;
//       j++;
//     }
//     int l=0;
//     while(l<=i-1){
//       cout<<"*";
//       l++;
//     }
//     int m=i-1;
//     while(m>=0){
//       cout<<"*";
//       m--;
//     }
//     int k=n-i;
//     while(k>0){
//       cout<<k;
//       k--;
//     }
//     i++;
//     cout<<endl;
//   }
//   }