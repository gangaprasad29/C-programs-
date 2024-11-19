
// #include<iostream>
// using namespace std;

// int main() {
    
//     int a, b;

//     cout <<" Enter the value of a "<<endl;
//     cin >> a;

//     cout<<" Enter the value of b " <<endl;
//     cin >> b;

//     char op;
//     cout<<" Enter the Operation you want to perform" <<endl;
//     cin >> op;

//     switch( op ) {

//         case '+':  cout << (a+b) <<endl; 
//                   break;

//         case '-': cout<< (a-b) <<endl;
//                   break;  

//         case '*': cout<< (a*b) <<endl;
//                   break;

//         case '/': cout<< (a/b) <<endl;
//                   break;

//         case '%': cout<< (a%b) <<endl;
//                   break;

//         default: cout << "Please enter a valid Operation " << endl;

//     }
  

//     return 0;
// }



//////////// FUNCTIONS /////////


// #include<bits/stdc++.h>
// using namespace std;
// int power(int a, int b){
//     int ans=1;
//     for(int i=0;i<b;i++){
//         ans=ans*a;
//     }
//     return ans;
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     int ans = power(a,b);
//     cout<<ans;
//     return 0;
// }



// #include<iostream>
// using namespace std;

// //Function Signature
// void printCounting(int num) {

// //    cout << n << endl;
//     //Function Body 
//     for(int i=1; i<=num; i++) {
//         cout<< i << " ";
//     }
//     cout<<endl;
// }

// int main() {

//     int n;
//     cin >> n;

//     //function Call
//     printCounting(n);


//     return 0;
// }



//// EVEN OR ODD


// #include<iostream>
// using namespace std;


// //1 -> Even
// // 0 -> odd
// bool isEven(int a) {
//     //odd
//     if(a&1) {
//         return 0;
//     }
//     else { //Even
//         return 1;
//     }

// }

// int main() {
    
//     int num;
//     cin >> num;

//     if(isEven(num)) {
//         cout <<" Number is Even" <<endl;
//     }
//     else {
//         cout<< " Number is Odd" <<endl;
//     }


//     return 0;
// }


//// factorial 


// #include<iostream>
// using namespace std;

// int factorial(int n) {

//     int fact = 1;

//     for(int i = 1; i<=n; i++ ) {
//         fact = fact * i;
//     }

//     return fact;
// }

// int nCr(int n, int r) {

//     int num = factorial(n);

//     int denom = factorial(r) * factorial(n-r);

//     return num/denom;
// }


// int main( ) {

//     int n, r;

//     cin>> n >> r ;

//     cout <<" Answer is " << nCr(n,r) << endl;

//     return 0;
// }


//// prime 


// #include<iostream>
// using namespace std;
// // 0 -> Not a Prime no.
// // 1 -> Prime no.

// bool isPrime(int n ) {
//    for(int i = 2; i < n; i++){
//        if(n % i == 0) {
//        //divide hogya h , not a prime no.
//           return 0;
//         }
//    }
//    return 1;
// }

// int main() {
   
//    int n ;
//    cin >> n;
//    if(isPrime(n)) {
//         cout <<" is a Prime number " <<endl;
//    }
//    else{
//        cout<< "Not a prime number "<<endl;

//    }
// }


/// HW QUESTIONS
//// Ap = (3*n+7) take input n and output nth tem

// #include<bits/stdc++.h>
// using namespace std;
// int Ap(int n){
//    int ans=(n*3)+7;
//    return ans; 
// }
// int main(){
//    int n;
//    cin>>n;
//    int ans=Ap(n);
//    cout<<"the "<<n<<"th term of ap is:"<<ans<<endl;
   
//    return 0;

// }


////Q} take input a and b and print the no of set bits(1)

// #include<bits/stdc++.h>
// using namespace std;
// int countsetbit(int n){
//    int count=0;
//    while(n>0){
//       count+=(n&1);
//       n=n>>1;

//    }
//    return count;
// }
// int main(){
//    int a,b;
//    cin>>a>>b;
//    int setbit_of_a= countsetbit(a);
//    int setbit_of_b= countsetbit(b);

//    cout<<setbit_of_a+setbit_of_b<<endl;
   
//    return 0;
// }



//// Q} write a functioin of fibonacci series

// #include <iostream>
// using namespace std;
// int fibonacciseries(int n){
//     // Check for valid input
//     if (n <= 0) {
//         cout << "The number of terms must be positive." << endl;
//         return 1;
//     }

//     // Initial two Fibonacci numbers
//     int a = 0, b = 1;
    
//     // Output the Fibonacci sequence
//     for (int i = 0; i < n; ++i) {
//         cout << a << " ";
//         int next = a + b;  // Calculate the next Fibonacci number
//         a = b;             // Update 'a' to be the previous 'b'
//         b = next;          // Update 'b' to be the new Fibonacci number
//     }
// }
// int main() {
//     int n;
//     cin >> n;
    
//    int ans=fibonacciseries(n);
//    cout<<ans; 

//     return 0;
// }

