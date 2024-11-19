// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int array[n];
//     for(int i=0;i<n;i++){
//         cin>>array[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<array[i]<<" ";
//     }

//     return 0;
// }

//// Q} TAKE INPUT ARRAY FROM USER OF SIZE N AND PRINT MIN & MAX ELEMENT

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//       cin>>arr[i];
//     }
//     int maxNo=INT_MIN;
//     int minNo=INT_MAX;
//     for(int i=0; i<n; i++){
//         maxNo=max(maxNo,arr[i]);
//         minNo=min(minNo,arr[i]);
//     }
//     cout<<maxNo<<" "<<minNo;
//     return 0;
// }

//// LINEAR SEARCH
 
// #include<iostream>
// using namespace std;
// int linearSearch(int n,int arr[],int key){
//    for(int i=0;i<n;i++){ 
//     if(arr[i]==key){
//         return i;
//     }

//    }
//    return -1;
// }
// int main(){
//      int n;
//      cin>>n;
//      int arr[n];
//      for(int i=0;i<n;i++){
//         cin>>arr[i];
//      }
//      int key;
//      cin>>key;


//     cout<<linearSearch(n,arr,key);

//     return 0;
// }


///// SEARCHING IN ARRAY
//// BINARY SEARCH

// #include<iostream>
// using namespace std;
// int binarySearch(int n,int arr[],int key){
    // int s=0; //starting point
    // int e=n;  //ending point
    // while(s<=e){
    //     int mid=(s+e)/2;
    //     if(arr[mid]==key){
    //         return mid;
    //     }
    //     else if(arr[mid]>key){
    //         e=mid-1;
    //     }
    //     else{
    //         s=mid+1;
    //     }
    // }
    // return -1;
// }
// int main(){
//  int n;
//  cin>>n;
//  int arr[n];
//  for(int i=0;i<n;i++){
//     cin>>arr[i];
//  }  
//  int key;
//  cin>>key; 

//  cout<<binarySearch(n,arr,key)<<endl;

//     return 0;
// }


//// SORTING IN ARRAYS

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//       int n;
//       cin>>n;
//       int arr[n];
//       for(int i=0;i<n;i++){
//         cin>>arr[i];
//       }
//       for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[i]){
//                 int temp=arr[j];
//                 arr[j]=arr[i];
//                 arr[i]=temp;
//             }
//         }
//       }
//       for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//       }
//       cout<<endl;

//     return 0;
// }


//// BUBBLE SORT


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int counter=1;
//     while(counter<n){
//         for(int i=0;i<counter-1;i++){
//             if(arr[i]>arr[i+1]){
//                 int temp=arr[i];
//                 arr[i]=arr[i+1];
//                 arr[i+1]=temp;
//             }
//      }
//      counter++;
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
    
//     cout<<endl;
//     return 0;
// }


////INSERTION SORT

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current){
            arr[j+1]=arr[j];
            j--;

        }
        arr[j+1]=current;
    }
    for(int i=0;i<n;i++){
     cout<<arr[i]<<" ";
    }
     cout<<endl;


    return 0;
}