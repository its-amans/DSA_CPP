#include<iostream>
#include<cmath>
using namespace std;


// 1st approach
// int main(){
//     int n=11,dig=0,ans=0;
//     while(n!=0){
//         dig=n%2;
//         n=n/2;
//         ans=ans*10+dig;
//     }
//     cout<<ans;
// }



// 2nd approach
// int main(){
//     int n=5,i=0,ans=0;
//     while(n!=0){
//         int bit=n&1;
//         n=n>>1;
//         ans=ans+pow(10,i)*bit;
//         i++;
//     }
//     cout<<ans;
// }

//The approach to print the decimal number to 32 bit format.

// int main(){
//     int n=5,pos=0,ans[32]={0};
//     int bit=0;
//     while(n!=0){
//         bit=n&1;
//         if(bit){
//             ans[pos]=bit;
//         }
//         else{
//             ans[pos]=0;
//         }
//         n=n>>1;
//         pos++;
//     }
//     for(int i = 31; i >= 0; i--) {
//         cout << ans[i];
//     }
//     cout << endl;
// }
// 32bit representation max no is 2147483647
// Max range of int 4,294,967,296



// Converting Negative decimal to binary

// int main() {
//     int n = -5;
//     unsigned int mask = 1 << 31; // Mask to extract the most significant bit (sign bit)
//     unsigned int num = static_cast<unsigned int>(n); 
//     // The static_cast is used to convert the signed integer to unsigned integer
//     //Range of int is -2,147,483,648 to 2,147,483,647 and unsigned int is 0 to 4,294,967,296

//     // Treat the negative number as unsigned to get its 2's complement representation
//     // When the n=-5  is signed its binary representation is 11111111111111111111111111111011 and after converting to unsigned it becomes 4294967291 which also have same binary representation 11111111111111111111111111111011.

//     for (int i = 0; i < 32; i++) {
//         // Check if the current bit is set
//         if (num & mask) {
//             cout << "1";
//         } else {
//             cout << "0";
//         }
//         mask >>= 1; // Shift the mask to the right
//     }
//     cout << endl;
// }
