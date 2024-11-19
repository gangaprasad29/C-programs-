//// PRINT THE REVERSE STRING USING RECURSION

// #include<bits/stdc++.h>
// using namespace std;

// /*  if we use  void reverse(string str, int s, int e)  then 
// The reverse function in your code is taking str by value. 
// This means that any changes made to the string in the function won't reflect in the original string. 
// You should pass the string by reference to modify it correctly */

// void reverse(string &str,int s,int e){
//    // base case
//    if(s>e){
//     return ;
//    }
//    swap(str[s],str[e]);
//    s++;
//    e--;

//    // recursion
//    reverse(str,s,e);
// }
// int main(){
//     string name="gangaprasad";
//     int s=0;
//     int e=name.length()-1;
//     reverse(name,s,e);
//     cout<<name<<endl;
  
//     return 0;
// }



////   check palindrom

// #include<iostream>
// using namespace std;

// bool checkPalindrome(string str, int i, int  j) {

//     //base case
//     if(i>j)
//         return true;

//     if(str[i] != str[j])
//         return false;
//     else{
//         //Recursive call
//         return checkPalindrome(str, i+1,j-1);
//     }
// }

// int main() {

//     string name = "BookkooB";
//     cout << endl;

//     bool isPalindrome = checkPalindrome(name, 0, name.length()-1 );

//     if(isPalindrome) {
//         cout << "Its a Palindrome " << endl; 
//     }
//     else {
//         cout << "Its not a Palindrome " << endl;
//     }
//     return 0;
// }



///// take i/p a and b and give a^b output

// #include<bits/stdc++.h>
// using namespace std;
// int power(int a, int b){
//     // base case
//     if(b==0)
//     return 1;

//     if(b==1)
//     return a;

//     // recursioin
//     int ans=power(a,b/2);

//     if(b%2==0){
//         return ans*ans;
//     }
//     else{
//         return a*ans*ans;
//     }

// }
// int main(){
//     int a;
//     int b;
//     cin>>a>>b;
//     int ans=power(a,b);
//     cout<<"ans is:"<<ans<<endl;
//     return 0;
// }



////// bubble sort using recursion

#include<iostream>
using namespace std;

void sortArray(int *arr, int n) {
    //base case - already sorted        ( if size==0 or size==1 then all are alwrady sorted)
    if(n == 0 || n == 1) {
        return ;
    }
    //1 case sovle karlia - largest element ko end me rakh dega
    for(int i=0; i<n-1; i++) {
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }
    //Recursive Call  ( ek solve karneke bad n-1 size will remain)
    sortArray(arr, n-1);
}
int main() {

    int arr[5] = {2,5,1,6,9}; 
    sortArray(arr,5);
    for(int i=0; i<5; i++) {
        cout << arr[i] << " ";
    }cout << endl;

    return 0;
}