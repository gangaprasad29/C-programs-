// #include<iostream>
// using namespace std;

// // HOLD
// void printArray(int arr[], int size) {

//     cout<< " printing the array " << endl;
//     //print the array
//     for(int i =0; i<size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout<< " printing DONE " << endl;
// }

// int main() {

//     //declare
//     int number[15];

//     //accessing an array
//     cout << "Value at 14 index " << number[14] << endl;

//     //cout << "Value at 20 index " << number[20] << endl;

//     //initialising an array 
//     int second[3] = {5, 7, 11};

//     //accesing an element
//     cout << "Value at 2 index " << second[2] << endl;

//     int third[15] = {2,7};

//     int n = 15;
//     //printArray(third, 15);
//     int thirdSize = sizeof(third)/sizeof(int);
//     cout<<" Size of Third is " << thirdSize <<endl;

//     //initialising all locations with 0
//     int fourth[10] = {0};

//     n = 10;
//     //printArray(fourth, 10);

//     //initialising all locations with 1 [not possible with below line]
//     int fifth[10] = {1};

//     n = 10;
//     //printArray(fifth, 10);

//     int fifthSize = sizeof(fifth)/sizeof(int);
//     cout<<" Size of Fifth is " << fifthSize <<endl;
    

//     char ch[5] = {'a', 'b', 'c', 'r', 'p'}; 
//     cout << ch[3] << endl;

//     cout<< " printing the array " << endl;
//     //print the array
//     for(int i =0; i<5; i++) {
//         cout << ch[i] << " ";
//     }
//     cout<< " printing DONE " << endl;
//     double firstDouble[5];
//     float firstFloat[6];
//     bool firstBool[9];


//     cout << endl << " Everything is Fine " << endl << endl;

//     return 0;
// }




// #include<iostream>
// using namespace std;

// void update(int arr[], int n) {
//     cout << endl << "Inside the function" <<endl;   
//     //updating array's first element
//     arr[0] = 120;
//     //printing the array
//     for(int i=0; i<3; i++) {
//         cout << arr[i] <<" ";
//     } cout<<endl;

//     cout << "Going back to main function" << endl;
// }

// int main() {

//     int arr[3] = {1,2,3};
//     update(arr, 3);
//     //printing the array
//     cout<< endl << "Printing in main function" << endl;
//     for(int i=0; i<3; i++) {
//         cout << arr[i] <<" ";
//     }
//     cout << endl;
//     return 0;
// }




//// print max and min in the given array 

// #include<bits/stdc++.h>
// using namespace std; 
// //for minumun
// int getmin(int arr[], int n){
//     int min=INT_MAX;
//     for(int i=0;i<n;i++){
//         if(arr[i]<min){
//             min=arr[i];
//         }
//     }
//     return min;
// }

// // for maximum
// int getmax(int arr[], int n){
//     int max=INT_MIN;
//     for(int i=0;i<n;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     return max;
// }
// int main(){
//     int n; //(n is size of array)
//     cin>>n;
//     int arr[100]; // dont put the variabel in the place of array size
//     for(int i=0;i<n; i++){
//         cin>>arr[i];
//     }
//     cout<<"max value is:"<<getmax(arr,n)<<endl;
//     cout<<"min value is:"<<getmin(arr,n)<<endl;
//     return 0;
// }

//// print the sum of all element in the given array


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int sum=0;
//     int arr[n];        // taking n is bad 
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         sum=sum+arr[i];
//     }
//     cout<<sum<<endl;
// }


//// REVERSE AN ARRAY

#include<bits/stdc++.h>
using namespace std;
//to reverse array
void reversearray(int arr[],int n){
    int start=0;
    int end=n-1;
        while(start<=end){
            swap(arr[start],arr[end]);
            start++;
            end--;

        }
    
}

//to print array 
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
   cout<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
        reversearray(arr,n);
        printarray(arr,n);
    return 0;
}