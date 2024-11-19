////Q} given an array a[] of size n for every i from 0 to n-1 print max[a[0],a[1],......a[i]]

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int mx=-1999999;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//          mx=max(mx,arr[i]);
//          cout<<mx<<" ";
//     }


//     return 0;
// }


//// SUBARRAY
//// Q} given an array a[] of size n . output each subarray of the given aray


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         int sum=0;
//         for(int j=i;j<n;j++){
//           sum+=arr[j];
//           cout<<arr[j]<<endl;
//         }
//     }


//     return 0;
// }



//// MAXIMUM POSSIBLE SUBARRAY

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             for(int k=i;k<=j;k++){
//                 cout<<arr[k]<<" ";
//             }
//             cout<<endl;
//         }
//     }


//     return 0;
// }

//// MAXIMUM SUBARRAY SUM PROBLEM

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int maxSum=INT_MIN;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             int sum=0;
//             for(int k=i;k<=j;k++){
//                sum+=arr[k];
//             }
//             maxSum=max(maxSum,sum);
//         }
//     }

//     cout<<maxSum<<endl;


//     return 0;
// }



//// MAXIMUN SUB ARRAY SUM (CUMULATIVE SUM APPROACH)
//// takes less time(less time complexity) then previous question

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int currentsum[n+1];
//     currentsum[0]=0;

//     for(int i=1;i<=n;i++){
//         currentsum[i]=currentsum[i-1]+arr[i-1];
//     }
//     int maxSum =INT_MIN;
//     for(int i=1;i<=n;i++){
//         int sum=0;
//         for(int j=0;j<i;j++){
//             sum=currentsum[i]-currentsum[j];
//             maxSum=max(sum,maxSum);
//         }
//     }

//     cout<<maxSum<<endl;
//     return 0;
// }




