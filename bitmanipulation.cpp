// #include<bits/stdc++.h>
// using namespace std;
// int getBit(int n,int position){
//     return ((n & (1<<position))!=0);
// }
// int setBit(int n, int position){
//     return (n | (1<<position));
// }
// int clearBit(int n, int position){
//     int mask=~(1<<position);
//     return (n & (mask));
// }
// int updateBit(int n,int position,int value){
//     int mask=~(1<<position);
//     n=n&mask;
//     return (n | (value<<position));
// }
// int main(){
//     //cout<<getBit(5,2)<<endl;
//     //cout<<setBit(5,1)<<endl;
//     //cout<<clearBit(5,2)<<endl;
//     cout<<updateBit(5,1,1)<<endl;
//     return 0;

// }




////Q} write a program to check if a given number is power of 2

  
// #include<bits/stdc++.h>
// using namespace std;
// bool ispowerof2(int n){
//     return (n && !(n&(n-1)));
// }
// int main(){
//     cout<<ispowerof2(15)<<endl;
//     return 0;
// }

////Q} write a program to count the number of ones in binary representation of a number

// #include<bits/stdc++.h>
// using namespace std;
// int noof1s(int n){
//     int count =0;
//     while(n!=0){
//         n=n&n-1;
//         count++;
//     }
//     return count;
// }
// int main(){
//     cout<<noof1s(19)<<endl;
//     return 0;
// }


////Q} write a program to generate all possible subset of a set


// #include<bits/stdc++.h>
// using namespace std;
// void subsets(int arr[],int n){
//     for(int i=0;i<(1<<n);i++){
//         for(int j=0;j<n;j++){
//             if(i&(1<<j)){
//                 cout<<arr[j]<<" ";
//             }
//         }cout<<endl;
//     }
// }
// int main(){
//     int arr[4]={1,2,3,4};
//     subsets(arr,4);
//     return 0;
// }



////Q} write a program to find a unique number in an array where 
////// all numbers except one, are present rwice

//  #include<bits/stdc++.h>
//  using namespace std;
 
//  int unique(int arr[],int n ){
//    int xorsum=0;
//    for(int i=0;i<n;i++){
//       xorsum=xorsum^arr[i];
//    }
//    return xorsum;
//  }
//  int main(){
//    int arr[]={1,2,3,4,1,2,3};
//     cout<<unique(arr,7)<<endl;
//     return 0;
//  }



/// same as above q change is to find 2 unique no.s

// #include<iostream>
// using namespace std;
// int setBit(int n, int pos) {
// return ((n & (1 << pos)) != 0);
// }
// void unique(int arr[], int n) {
// int xorsum = 0;
// for (int i = 0; i < n; i++) {
// xorsum = xorsum ^ arr[i];
// }
// int tempxor = xorsum;
// int setbit = 0;
// int pos = 0;
// while (setbit != 1) {
// setbit = xorsum & 1;
// pos++;
// xorsum = xorsum >> 1;
// }
// int newxor = 0;
// for (int i = 0; i < n; i++) {
// if (setBit(arr[i], pos - 1)) {
// newxor = newxor ^ arr[i];
// }
// }
// cout << newxor << endl;
// cout << (tempxor ^ newxor) << endl;
// }
// int main() {
// int arr[] = {1, 2, 3, 1, 2, 3, 5, 7};
// unique(arr, 8);
// return 0;
// }



//// Q} Write a program to find a unique number in an array where all numbers
////   except one, are present thrice.


#include<iostream>
using namespace std;
bool getBit(int n, int pos) {
return ((n & (1 << pos)) != 0);
}
int setBit( int n, int pos) {
return (n | (1 << pos));
}
int unique(int arr[], int n) {
int result = 0;
for (int i = 0; i < 64; i++) {
int sum = 0;
for (int j = 0; j < n; j++) {
if (getBit(arr[j], i)) {
sum++;
}
}
if (sum % 3 != 0) {
result = setBit(result, i);
}
}
return result;
}
int main() {
int arr[] = {1, 2, 3, 4, 1, 2, 3, 1, 2, 3};
cout << unique(arr, 10) << endl;
return 0;
}


