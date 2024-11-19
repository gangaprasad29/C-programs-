// #include<bits/stdc++.h>
// using namespace std;

// // int &func(int a){       BAD PRACTICE BECAUSE NUM AND ANS ARE LOCAL VARIABLES
// //     int num=a;
// //     int &ans=num;
// //     return ans;
// // }

// // int* fun(int n) {      ITS ALSO A BAD PRACTICE GIVE WARNING IN THE OUTPUT
// //     int* ptr = &n;
// //     return ptr;
// // }

// void update1(int n){
//     n++;
// }
// void update2(int &n){
//     n++;
// }
// int main(){

//     // int i=5;
//     // // creating a referance variable
//     // int &j=i;
//     // cout<<i<<endl;
//     // i++;
//     // cout<<i<<endl;
//     // j++;
//     // cout<<i<<endl;
//     // cout<<j<<endl;

//     int n=5; 
//     cout<<"before "<<n<<endl;
//     update1(n);
//     cout<<"after "<<n<<endl;

//     cout<<"before "<<n<<endl;
//     update2(n);
//     cout<<"after "<<n<<endl;

//     return 0;

// }



//// DYNAMIC ARRAYS[1D array]


// #include <iostream> // Fixed typo
// using namespace std;

// int getSum(int *arr, int n) {
//     int sum = 0;
//     for(int i = 0; i < n; i++) {
//         sum += arr[i];
//     } 
//     return sum;
// }

// int main() {
//     int n;
//     cin >> n;

//     // Variable size array
//     int* arr = new int[n];

//     // Taking input in array
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int ans = getSum(arr, n);

//     cout << "Answer is " << ans << endl;

//     // Properly delete the dynamic array to prevent memory leaks
//     delete[] arr;

//     // Remove infinite loops or use conditions
//     // Case 1
//     int counter = 0;
//     while(counter < 10) { // Example condition to break the loop
//         int i = 5;
//         counter++;
//     }
    
//     // Case 2
//     counter = 0;
//     while(counter < 10) { // Example condition to break the loop
//         int* ptr = new int;
//         *ptr = 5; // Do something with ptr
//         delete ptr; // Properly delete to prevent memory leak
//         counter++;
//     }

//     return 0;
// }




//////  DYNAMIC ARRAY(2D ARRAY)


#include <iostream>
using namespace std;

int main() {

    int row;
    cin >> row;

    int col;
    cin >> col;

    //creating a 2D array
    int** arr = new int*[row];
    for(int i=0; i<row; i++) {
        arr[i] = new int[col];
    }

    //taking input
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cin >> arr[i][j];
        }
    }

    //taking output
    cout << endl;
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cout << arr[i][j] << " ";
        } cout << endl;
    }


    //releasing memory
    for(int i=0; i<row; i++) {
        delete [] arr[i];
    }   

    delete []arr;

    //how to create a 2D array dynamically
    //input/Output
    //memory free kaise karani hai 

    return 0;
}