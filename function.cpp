// FUNCTIONS  ////

// #include<iostream>
// #include<cmath>
// using namespace std;
// int power(int a, int b){
//     int ans=1;
//     for(int i=1;i<=b;i++){
//         ans=ans*a;
//     }
//     return ans;
// }
// int main(){
//   int a,b ;
//   cin>>a>>b;
//   int answer=power(a,b);
//   cout<<answer;
//   return 0;
// }



// #include<iostream>
// using namespace std;

// int add(int a,int b){
//     int sum=a+b;
//     return sum;
// }
// int main(){
//   int a=5;
//   int b=4;

//   cout<<add(a,b)<<endl;

// return 0;
// }



// // using more than one function

// #include<iostream>
// using namespace std;

// int add(int a,int b){
//     int sum=a+b;
//     return sum;
// }

// int add(int a,int b,int c){
//     int sum=a+b+c;
//     return sum;
// }

// float add(float a,float b){
//     float sum=a+b;
//     return sum;
// }
// int main(){
//   int a=5;
//   int b=4;

//   float c=3.5;
//   float d=5.6;

//   cout<<add(a,b,1)<<endl;
//   cout<<add(c,d)<<endl;

// return 0;
// }


//// Q} print all prime no.s b/n 2 given no.s
// #include<iostream>
// #include<cmath>
// using namespace std;

// bool isPrime(int num){
//     for(int i=2;i<sqrt(num);i++){
//         if(num%i==0){
//             return false;
//         }
//     }
//     return true;
// }

// int main(){
//     int a;
//     int b;
//     cin>>a>>b;
//     for(int i=a;i<=b;i++){
//         if(isPrime(i)==true){
//             cout<<i<<endl;
//         }
//     }
//     return 0;
// }



//// Q2} fibonachi series 
// #include<iostream>
// using namespace std;
// void fib(int n){
//     int t1=0;
//     int t2=1;
//     int nextTerm;
//     for(int i=1;i<=n;i++){
//         cout<<t1<<endl;
//         nextTerm=t1+t2;
//         t1=t2;
//         t2=nextTerm;
//     }
//     return;

// }
// int main(){
//     int n;
//     cin>>n;

//     fib(n);
//     return 0;
// }


//// Q} FACTORIAL 
// #include<iostream>
// using namespace std;
// int fact(int n){
//     int factorial=1;
//     for(int i=2;i<=n;i++){
//         factorial*=i;
//     }
//     return factorial;
// }

// int main(){
//     int n;
//     cin>>n;
//     int ans=fact(n);
//     cout<<ans<<endl;


//   return 0;
// }


////Q} CALCULATE nCr
// #include<iostream>
// using namespace std;
// int fact(int n){
//     int factorial=1;
//     for(int i=2;i<=n;i++){
//         factorial*=i;
//     }
    
//     return factorial;
// }
// int main(){
//   int n,r ;
//   cin>>n>>r;
//   int ans=fact(n)/(fact(n-r)*fact(r));
//   cout<<ans<<endl;
//   return 0;
// }


//// PASCAL TRIANGLE 
// /*
// 1      ==> oCo  == iCj
// 11     ==> 1Co 1C1  == iCj
// 121    ==> 2Co 2C1 2C2  == iCj
// 1331   ==> 3Co 3C1 3C2 3C3  == iCj
// 14641  ==> 4Co 4C1 4C2 4C3 4C4  == iCj
// */

// #include<iostream>
// using namespace std;
// int fact(int n){
//     int factorial=1;
//     for(int i=2;i<=n;i++){
//         factorial*=i;
//     }
//     return factorial;
// }
// int main(){
//     int n;  // for no. of rows
//     cin>>n;
     
//     for(int i=0;i<n;i++){       // for rows
//         for(int j=0;j<=i;j++){   // for colums
//           cout<<fact(i)/(fact(i-j)*fact(j));  
//         }
//         cout<<endl;
//     }


//     return 0;
// }


// // FUNCTIONS P-2

// // FUNCTION PROTOTYPE

// /// STANDERD LIBRARY FUNCTIONS

// #include<iostream>
// #include<cmath>
// using namespace std;

// int main(){
//     cout<<pow(2,3)<<endl;
//     cout<<sqrt(10)<<endl;

//     return 0;
// }


// // PASS BY VALUE AND PASS BY REFERANCE

// #include<iostream>
// using namespace std;
// int main(){
//     int p=5;
//     int &q=p;

//     q++;
//     cout<<p<<endl;

//     cout<<&p<<endl;
//     cout<<&q<<endl;

//     return 0;
// }



