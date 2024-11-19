// #include<iostream>
// using namespace std;


// int main() {

//     int a = 4;
//     int b = 6;

//     cout<<" a&b " << (a&b) << endl;
//     cout<<" a|b " << (a|b) << endl;
//     cout<<" ~a " << ~a << endl;
//     cout<<" a^b " << (a^b) << endl;

//     cout<< (17>>1)<<endl;
//     cout<< (17>>2) <<endl;
//     cout<< (19<<1) <<endl;
//     cout<< (21<<2) <<endl;

//     int i = 7;

//     cout<< (++i) <<endl;
//     // 8 
//     cout<< (i++) <<endl;
//     // 8 , i = 9
//     cout<< (i--) <<endl;
//     //9 , i = 8 
//     cout<< (--i) <<endl; 
//     // 7, i =7
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int a,b=1;
//     a=10;
//     if(++a){
//         cout<<b;
//     }
//     else{
//         cout<<++b;
//     }
// }


//// ****** for loop ********* /////


//// fibonachi series


// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

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

//     cout << endl; // To ensure the output is followed by a newline
//     return 0;
// }



// #include<iostream>
// using namespace std;

// int main() {

//     int n ;
//     cout<<" enter the value of n" <<endl;
//     // cin >> n;

//     cout<<"printing count from 1 to n" << endl;
//     int i = 1;
//     for(; ; ) {
//         if(i<=n) {
//             cout<< i << endl;
//         }
//         else{
//             break;
//         } 
//         i++;
//     }


//    for(int a = 0 , b =1, c = 2; a>=0 && b>=1 && c>=2; a--,b--, c-- ){
//        cout<<a <<" "<< b << " "<<c << endl;
//    }
//    return 0;
// }


//// prime no 


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     bool isPrime=1;
//     for(int i=2;i<=n-1;i++){
//         if(n%i==0){
//             cout<<"it is not a prime ";
//             bool isprime=0;
//             break;
//         }
//         else{
//             //// may be prime
//             // no need of this else loop
//         }
        
//         }
//         if(isPrime==0){
//             cout<<"not a prime no."<<endl;
//         }
//         else{
//             cout<<"prime no."<<endl;
//     }
// }


//// USE OF CONTINUE STATEMENT

// #include<iostream>
// using namespace std;

// int main() {

//     for(int i=0; i<5; i++) {

//         cout<< " HI " << endl;
//         cout<< " Hey " << endl;
//         continue;
//         // un reacheable part
//         cout<< "Reply toh karde " <<endl;

//     }
//     return 0;
// }



//////// ********* VARIABLES & SCOPES *******//////////

// #include<iostream>
// using namespace std;

// int main() {
//     int a=2;
//     cout<<a<<endl;

//     if(true){
//         int a=5; 
//         cout<<a;
//     }
//     return 0;
// }

