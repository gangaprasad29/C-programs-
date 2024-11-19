// //selection sort

// #include <bits/stdc++.h> 
// using namespace std;

// void selectionSort(int arr[], int n)
// {   
//     // Write your code here.
//     for(int i=0;i<n-1;i++){
//         int minindex=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[minindex]){
//                 minindex=j;
//             }
//         }
//         swap(arr[minindex],arr[i]);
//     }
// }
// int main(){
//   int arr[5] = {64, 25, 12, 22, 11};
//   selectionSort(arr,5);
//   cout << "Sorted array: \n";
//     for (int i = 0; i < 5; i++) {
//         cout << arr[i] << " ";
//     }
// }

// // BUBBOLE SORT

// #include <bits/stdc++.h>
// using namespace std;

// // Function to perform bubble sort
// void bubbleSort(vector<int>& arr, int n) {
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//     }
// }

// int main() {
//     int n;
//     cout << "Enter number of elements: ";
//     cin >> n;

//     vector<int> arr(n); // Create a vector of size n

//     cout << "Enter the elements of the array:\n";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     // Call bubbleSort
//     bubbleSort(arr, n);

//     // Print sorted array
//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }




//// insertion sort



