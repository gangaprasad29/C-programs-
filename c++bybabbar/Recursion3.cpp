//// RECURSION WITH BINARY SEARCH

// #include<bits/stdc++.h>
// using namespace std;

// bool isSorted(int arr[], int size) {
//     // base case
//     if (size == 0 || size == 1) {
//         return true;
//     }

//     if (arr[0] > arr[1]) {
//         return false;
//     } else {
//         bool remainingPart = isSorted(arr + 1, size - 1);
//         return remainingPart;
//     }
// }

// int main() {
//     int arr[5] = {2, 4, 6, 8, 9};
//     int size = 5;

//     bool ans = isSorted(arr, size);
//     if (ans) {
//         cout << "array sorted" << endl;
//     } else {
//         cout << "array is not sorted" << endl;
//     }
//     return 0;
// }


////Q} sum of all element in array

// #include<bits/stdc++.h>
// using namespace std;

// int sumArray(int arr[], int size) {
//     // base case
//     if (size == 0) {
//         return 0;
//     }
//     if(size==1){
//         return arr[0];
//     }
    
//     // recursive case: add current element to the sum of the rest of the array
//     return arr[0] + sumArray(arr + 1, size - 1);
// }
// int main() {
//     int arr[5] = {2, 4, 6, 8, 9};
//     int size = 5;
//     int totalSum = sumArray(arr, size);
//     cout << "Sum of all elements in the array: " << totalSum << endl;
//     return 0;
// }



///// LINEAR SEARCH IN RECURSION 


// #include<iostream>
// using namespace std;

// void print(int arr[], int n) {
//     cout << "Size of array is " << n << endl;

//     for(int i=0; i<n; i++) {
//         cout << arr[i] << " ";
//     } cout << endl;

// }

// bool linearSearch(int arr[], int size, int k ) {
//     print(arr,size);
//     //base case
//     if(size == 0) 
//         return false;

//     if(arr[0] == k) {
//         return true;
//     }
//     else {
//         bool remainingPart = linearSearch(arr+1, size-1, k );
//         return remainingPart;
//     }
// }

// int main() {

//     int arr[5] = {3,5,1,2,6};
//     int size = 5;
//     int key = 6;
//     bool ans = linearSearch(arr, size, key);

//     if(ans ){
//         cout << "Present " << endl;
//     }
//     else{
//         cout << "absent " << endl;
//     }

//     return 0;
// }




////////////  BINARY SEARCH    /////////


#include<iostream>
using namespace std;

void print(int arr[], int s, int e) {

    for(int i=s; i<=e; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}

bool binarySearch(int *arr, int s, int e , int k ) {

    //base case (2)
    //1  element not found
    if(s>e)
        return false;
    int mid = s + (e-s)/2;
    //2 element found
    if(arr[mid] == k)
        return true;

    if(arr[mid] < k) {
        return binarySearch(arr, mid+1, e, k);
    }
    else{
        return binarySearch(arr, s, mid-1, k);
    }
}


int main() {

    int arr[11] = {2,4,6,10,14,18,22,38,49,55,222};
    int size = 11;
    int key = 222;

    cout << "Present or not " << binarySearch(arr, 0, size-1, key) << endl;

    return 0;
}
