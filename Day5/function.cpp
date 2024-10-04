//power(a,b)
//The major difference bw a function and loop that functions can be called anywhere in the program 
#include <iostream>
using namespace std;

// int power(int a,int b){

//     int ans=1;
//     for(int i=1;i<=b;i++){
//         ans*=a;
//     }
//     return ans;
// }
// int main(){
//     int x=power(2,10);
//     cout<<x;
// }


// A function to calculate ncr


//  using recursion
// int factorial(int x){
//     if(x==0 || x==1){
//         return 1;
//     }
//     return x*factorial(x-1);
// }

//Using loops
// int factorial(int x){
//     int ans=1;
//     for(int i=1;i<=x;i++){
//         ans=ans*i;
//     }
//     return ans;
// }
// int ncr(int n,int r){
//     if(n==0 || r==0){
//         return 1;
//     }
//     else if(n==r){
//         return 1;
//     }
//     else if(n>r){
//         return factorial(n)/(factorial(n-r)*factorial(r));
//     }
// }
// int main(){
//     int n,r;
//     cout<<"Enter the number n and r"<<endl;
//     cin>>n>>r;
//     int ans=ncr(n,r);
//     cout<<ans;
// }


//Print the nth term of the ap
// int Ap(int a,int d){
//     int n;
//     cout<<"Enter the nth term:";
//     cin>>n;
//     return a+((n-1)*d);
// }
// int main(){
//     int a,d,n;
//     cout<<"Enter the first term:";
//     cin>>a;
//     cout<<"Enter the Common difference:";
//     cin>>d;

//     int x=Ap(a,d);
//     cout<<x;
// }


// Program to print the  nth term of fabonacci series

// int printnth(int n){
//     int n1=0;
//     int n2=1;
//     int n3=0;
//     for(int i=3;i<=n;i++){
//         n3=n1+n2;
//         n1=n2;
//         n2=n3;
//     }
//     return n3;
// }
// int main(){
//     cout<<printnth(5);
// }



//Total no of setbits in a and b

// int setbits(int n){
//     int count=0;
//     while(n!=0){
//         if(n&1)
//             count+=1;
//         n>>=1;
//     }
//     return count;
// }
// int returnsetbit(int a,int b){
//     return setbits(a)+setbits(b);
// }
// int main(){
//     int a,b;
//     cout<<"Enter both the numbers:"<<endl;
//     cin>>a>>b;
//     cout<<"The total setbits are: "<<returnsetbit(a,b);
// }