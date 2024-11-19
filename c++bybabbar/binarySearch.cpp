// //// importent in online exams and interview wise 

// #include<bits/stdc++.h>
// using namespace std;

// int binarySearch(int arr[],int n, int key){
//     int start=0;
//     int end =n-1; //( size -1)
//     int mid=(start + (end-start)/2);  
//     while(start<=end){
//         if(arr[mid]==key){
//             return mid;
//         }
//         // if key is grater then the key then go to right part
//         if(key>arr[mid]){
//            start=mid+1;
//         }
//         // if key is less then the key then go to left part
//         else{
//             end=mid-1;
//         }
//         /// update the new mid 
//         mid=(start + (end-start)/2);
//     }
//     return -1;
// }
// int main(){
//     int even[6]={2,4,6,8,12,18};
//     int odd[5]={3,8,11,14,16};

//     int evenindex=binarySearch(even,6,12);
//     cout<<"index of 12 is:"<<evenindex<<endl;

//     int oddindex=binarySearch(odd,5,8);
//     cout<<"index of 8 is:"<<oddindex<<endl;

//     return 0;
// }


//// to find the first and the last position of an element of an sorted array

// #include<bits/stdc++.h>
// using namespace std;
// int firstocc(int arr[],int n,int key){
//     int start=0;
//     int end=n-1;
//     int mid=start+(end-start)/2;
//     int ans=-1;
//     while(start<=end){
//         if(arr[mid]==key){
//             ans=mid;
//             end=mid-1;
//         }
//         else if(key>arr[mid]){
//             start=mid+1;
//         }
//         else if(key<arr[mid]){
//             end=mid-1;
//         }
//         //update the mid
//         mid=start+(end-start)/2;

//     }
//     return ans;
// }
// int lastocc(int arr[],int n,int key){
//     int start=0;
//     int end=n-1;
//     int mid=start+(end-start)/2;
//     int ans=-1;
//     while(start<=end){
//         if(arr[mid]==key){
//             ans=mid;
//             start=mid+1;
//         }
//         else if(key>arr[mid]){
//             start=mid+1;
//         }
//         else if(key<arr[mid]){
//             end=mid-1;
//         }
//         //update the mid
//         mid=start+(end-start)/2;

//     }
//     return ans;
// }

// int main(){
//     int arr[9]={1,2,3,3,3,3,3,4,5};
//     cout<<"first occerance is at index:"<<firstocc(arr,9,3)<<endl;
//     cout<<"last occerance is at index:"<<lastocc(arr,9,3)<<endl;
//     int first=firstocc(arr,9,3);
//     int last=lastocc(arr,9,3);
//     int totalocc=last-first+1;
//     cout<<"total no of occerance of an key is:"<<totalocc<<endl;

// return 0;    
// }


//// find pivot in an array

// #include<bits/stdc++.h>
// using namespace std;

// int getpivot(int arr[], int n){
//      int s=0;
//      int e=n-1;
//      int mid=s+(e-s)/2;

//      while(s<e){
//         if(arr[mid]>=arr[0]){
//             s=mid+1;
//         }
//         else{
//             e=mid;
//         }
//         mid=s+(e-s)/2;
//      }
//      return s;
// }

// int  main(){
//    int arr[5]={8,10,17,1,2}; // index of smallest is the answer
//    cout<<"pivot is:"<<getpivot(arr,5)<<endl;
//     return 0;
// }


/// sqrt using binary search


#include<iostream>
using namespace std;

 long long int sqrtInteger(int n) {
        
        int s = 0;
        int e = n;
        long long int mid = s + (e-s)/2;
        
        long long int ans = -1;
        while(s<=e) {
            
            long long int square = mid*mid;
            
            if(square == n)
                return mid;
            
            if(square < n ){
                ans = mid;
                s = mid+1;
            }
            else
            {
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }

double morePrecision(int n, int precision, int tempSol) {
    
    double factor = 1;
    double ans = tempSol;

    for(int i=0; i<precision; i++) {
        factor = factor/10;

        for(double j=ans; j*j<n; j= j+factor ){
            ans = j;
        }
    }
    return ans;
}

int main() {
    int n;
    cout <<" Enter the number " << endl;
    cin >> n;

    int tempSol = sqrtInteger(n);
    cout <<" Answer is " << morePrecision(n, 3, tempSol) << endl;

    return 0;
}



















