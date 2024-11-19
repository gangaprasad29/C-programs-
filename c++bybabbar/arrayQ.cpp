/// write a program to swap elements in the array


// #include<bits/stdc++.h>
// using namespace std;
// void printarray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// void swapalternet(int arr[],int n){
//     for(int i=0;i<n-1;i=i+2){
//         if(i<=n){
//           swap(arr[i],arr[i+1]);
        
//         //OR   different swapping methods

//         // int temp;
//         // temp=arr[i];
//         // arr[i]=arr[i+1];
//         // arr[i+1]=temp;
        
//         //OR

//         // arr[i]-=arr[i+1];
//         // arr[i+1]+=arr[i];
//         // arr[i]=arr[i+1]-arr[i];

//         // OR

//         // arr[i]^=arr[i+1];
//         // arr[i+1]^=arr[i];
//         // arr[i]^=arr[i+1];



//         }
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     swapalternet(arr,n);
//     printarray(arr,n);
//     return 0;
// }


//// SORT 0 & 1

// #include<iostream>
// using namespace std;
// void printArray(int arr[], int n) {
//     for(int i=0; i<n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
// void sortOne(int arr[], int n) {
//     int left = 0, right = n-1;

//     while(left < right) {
//         while(arr[left] == 0 && left < right )  {
//             left++;
//         }

//         while(arr[right]==1 && left < right){
//             right--;
//         }

//         //agar yha pohoch gye ho, iska matlab
//         //arr[left]==1 and arr[right]==0
//         if(left<right)
//         {
//             swap(arr[left], arr[right]);
//             left++;
//             right--;
//         }
//     }

// }
// int main() {
   
//     int arr[8] = {1,1,0,0,0,0,1,0};
//     sortOne(arr, 8);
//     printArray(arr, 8);
//     return 0;
// }





///// reverse an array

#include<bits/stdc++.h>
using namespace std;
vector<int> reverse(vector<int> v){
    int s=0;
    int e=v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}
void printreverse(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v;

    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);

    vector<int> ans=reverse(v);
    printreverse(ans);
    return 0;
}