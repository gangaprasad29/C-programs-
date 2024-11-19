// #include <iostream>
// using namespace std;

// int main(){
//     int a=123;
//     cout<<a<<endl;

//     char b='v';
//     cout<<b<<endl;

//     bool bl=true;
//     cout<<bl<<endl;

//     float f=1.2;
//     cout<<f<<endl;

//     double d=1.23;
//     cout<<d<<endl;

//     int size = sizeof(a);
//     cout<<"size of a is:"<<size<<endl;
    
//    /* TYPECASTING
    
//     int c='c';
//     cout<<c<<endl;
    
//     char ch1=98;
//     cout<<ch1<<endl;


//   */

// }



//// switch case and functions ////

// #include<iostream>
// using namespace std;
// int main(){
//     int num=2;

//     cout<<endl;
//     switch(num){
//         case 1: cout<<"first"<<endl;
//                 break;
//         case 2: cout<<"second"<<endl;
//                 break;
//         default: cout<<"it is the default case"<<endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int ch='1';

//     cout<<endl;
//     switch(ch){
//         case 1: cout<<"first"<<endl;
//                 break;
//         case '1': cout<<"character one"<<endl;
//                 break;
//         default: cout<<"it is the default case"<<endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;

//     cout<<"enter the value of a:"<<endl;
//     cin>>a;

//     cout<<"enter the value of b:"<<endl;
//     cin>>b;

//     char op;
//     cout<<"enter the operation you want to perform"<<endl;
//     cin>>op;
     
    
//     switch(op){
//         case '+':cout<<(a+b)<<endl;
//         break;

//         case '-':cout<<(a-b)<<endl;
//         break;

//         case '*':cout<<(a*b)<<endl;
//         break;

//         case '/':cout<<(a/b)<<endl;
//         break;

//         case '%':cout<<(a%b)<<endl;
//         break;

//         default: cout<<"please enter a valid operation";

//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int amount;
    
//     // Input the amount
//     cout << "Enter the amount in rupees: ";
//     cin >> amount;
    
//     // Variables to store number of notes
//     int notes100 = 0, notes50 = 0, notes20 = 0, notes10 = 0;
    
//     // Calculate number of each denomination
//     switch (amount / 10) {
//         case 10:
//             notes100 = amount / 100;
//             amount %= 100;
//             // fall through
//             break;
//         case 5:
//             notes50 = amount / 50;
//             amount %= 50;
//             // fall through
//         case 2:
//             notes20 = amount / 20;
//             amount %= 20;
//             // fall through
//         case 1:
//             notes10 = amount / 10;
//             amount %= 10;
//             // fall through
//     }
    
//     // Output the results
//     cout << "Number of 100 rupee notes: " << notes100 << endl;
//     cout << "Number of 50 rupee notes: " << notes50 << endl;
//     cout << "Number of 20 rupee notes: " << notes20 << endl;
//     cout << "Number of 10 rupee notes: " << notes10 << endl;
    
//     return 0;
// }









