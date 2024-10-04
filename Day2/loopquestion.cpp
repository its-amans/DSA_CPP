#include <iostream>
using namespace std;

//// Q1
// int main(){
//     int a,b=1;
//     a=10;
//     if(++a){// This section executed bcz if (11) is returning true .no comparision is performed here.
//         cout<<b; 
//     }
//     else 
//     cout <<++b;
// }

// int main(){
//     int a=1;
//     int b=2;
//     if( a-- > 0 && ++b > 2){
//         cout<<"stage 1 -Inside else ";
//     }
//     else{
//         cout<<"Stage 2- Inside else";
//     }
//     cout<< a <<" "<<b<< endl;
// }

// int main (){
//     int number =3;
//     cout<<25* (++number);
// }

//Imp question

// int main(){
//     int a=1;
//     int b=2;
//     if( a-- > 0 || ++b > 2){  // if one condition in or statement is true compiler never move to the next statatement .
//         cout<<"stage 1 -Inside else ";
//     }
//     else{
//         cout<<"Stage 2- Inside else";
//     }
//     cout<< a <<" "<<b<< endl;
// }


// int main(){
//     int a=1;
//     int b=a++;
//     int c=++a;
//     cout<<b<<endl;
//     cout<<c;
// }


//Fibonacci Series

// int main(){
//     int n;
//     cout<<"Enter the no of terms";
//     cin>>n;
//     int t1=0;
//     int t2=1;
//     int t3=t1+t2;
//     cout<<t1<<" "<<t2<<" ";
//     for(int i=3;i<=n;i++){
//         t1=t2;
//         t2=t3;
//         t3=t1+t2;
//         cout<<t3<<" ";
//     }

// }

// int main(){
//     int n;
//     cout<<"Enter the no of terms";
//     cin>>n;
//     int t1=0;
//     int t2=1;
//     cout<<t1<<" "<<t2<<" ";
//     for(int i=3;i<=n;i++){
//         int t3=t1+t2;
//         cout<<t3<<" ";
//         t1=t2;
//         t2=t3;
//     }

// }



// // Prime No
// int main(){
//     int n;
//     cout<<" Enter the number ";
//     cin>>n;
//     bool isprime=1;
//     for(int i=2;i<n;i++){
//         if( n % i == 0){
//             isprime=0;
//         }
//     }
//     if(isprime==0){
//         cout<<"Number is Not Prime";
//     }
//     else{
//         cout<<"Number is Prime";
//     }
// }



//Questions On loop and break,continue 

// int main(){
//     for(int i=0;i<=5;i++){ //here increment 1 after print
//         cout<<i<<" ";
//         i++; // here increment 2
//     }
// }


//Q
// int main(){
//     for(int i=0;i<=5;i--){ //here decrement after print
//         cout<<i<<" ";
//         i++; // here increment 
//     }
// }


//Q
// int main(){
//     for(int i=0;i<=15;i+=2){
//         cout<<i<<" ";

//         if(i&1){
//             continue;
//         }

//         i++;
//     }
// }


//Q
// int main(){
//     for(int i=0;i<5;i++){
//         for(int j=i;j<=5;j++){
//             cout<<i <<" "<< j<<endl;
//         }
//     }
// }

// int main(){
//     for(int i=0;i<5;i++){
//         for(int j=i;j<=5;j++){
//             if(i+j ==10){
//                 break;
//             }
//             cout<<i <<" "<< j<<endl;
//         }
//     }
//}