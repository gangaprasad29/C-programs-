/// RECTANGULAR PATTERN
/*Q1

******
******
******

*/

// #include<iostream>
// using namespace std;
// int main(){
//    for(int i=0; i<3; i++){  
//      for(int j=0; j<6; j++){
//         cout<<'*';
//      }
//      cout<<endl;
//    }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int m,n;
//     cin>>m>>n; // where m and n are no. of rows & columns

//    for(int i=0; i<m; i++){  
//      for(int j=0; j<n; j++){
//         cout<<'*';
//      }
//      cout<<endl;
//    }
// }


/*
******
*    *
*    *
******

*/

// #include<iostream>
// using namespace std;
// int main(){
//    int m,n;
//    cin>>m>>n;
//    for(int i=1;i<=m;i++){
//     for(int j=1;j<=n;j++){
//         if(i==1 || j==1 || i==m || j==n){
//             cout<<'*';
//         }
//         else{
//             cout<<" ";
//         }
//     }
//     cout<<endl;
//    }
//    return 0;
// }

//// code is write but terminal is not giving right o/p

/// TRIANGULAR PATTERN

/*
*
**
***
****
*/

// #include<iostream>
// using namespace std;
// int main(){
//    int m;
//    cin>>m;
//    for(int i=1;i<=m;i++){
//     for(int j=1;j<=i;j++){
//         cout<<'*';
//     }
//     cout<<endl;
//    }
   
   
//    return 0;
// }


/*
****
***
**
*
*/

// #include<iostream>
// using namespace std;
// int main(){
//    int m;
//    cin>>m;
//    for(int i=m;i>=1;--i){
//     for(int j=0;j<i;++j){
//         cout<<'*';
//     }
//     cout<<endl;
//    }
   
   
//    return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//    int m;
//    cin>>m;
//    for(int i=1;i<=m;i++){
//       for(int j=1;j<=(m-i);j++){
//       cout<<' ';
//     }
//     for(int j=1;j<=(2*i-1);j++){
//        cout<<'*';
//     }
//     cout<<endl;

//    }
   
//    return 0;
// }


/*

1234567
2345671
3456712
4567123
5671234
6712345
7123456

*/

// #include<iostream>
// using namespace std;
// int main(){
//    int m;
//    cin>>m;
//    for(int i=1;i<=m;i++){
//       for(int j=i;j<=m;j++){
//          cout<<j;
//       }
//       for(int j=1;j<=(i-1);j++){
//          cout<<j;
//       }
//       cout<<endl;
//    }
   
//    return 0;
// }


/*
123456
1    6
1    6
123456
*/

















/*
121212
212121
121212
212121
*/
/// HINT I+J=EVEN THAN PRINT 1 & IF ODD PRINT 2

// #include<iostream>
// using namespace std;
// int main(){
//    int m,n;
//    cin>>m>>n;
//    for(int i=1;i<=m;i++){
//       for(int j=1;j<=n;j++){
//          if((i+j)%2==0){
//             cout<<'1';
//          }
//          else{
//             cout<<'2';
//          }
//       }
//       cout<<endl;
//    }

 
   
//    return 0;
// }


/* 
   1
  121
 12321
1234321
*/

// #include<iostream>
// using namespace std;
// int main(){
//    int m;
//    cin>>m;
//    for(int i=1;i<=m;i++){
//       for(int j=1;j<=(m-i);j++){
//          cout<<' ';
//       }
//    a=9   for(int j=1;j<=i;j++){
//          cout<<j;
//       }
//       for(int j=(i-1);j>=1;j--){
//          cout<<j;
//       }
//       cout<<endl;
//    }
  
   
//    return 0;

// }

//PRACTICE QUESTIONS

/* Q1.
print ALPHABET DISMOND pattern
    A
   ABC
  ABCDE
 ABCDEFG
ABCDEFGHI
 ABCDEFG
  ABCDE
   ABC
    
    it is a diamond pattern foe n=5(use assci value )
    7 ,b=98,....
    A=65 ,B=66,....
    here we are using concept of type casting
   no. of charcter formula (2*i(line no.)-1) for upper triangle
   no. of characters for lower trangle is (2*(2n-line)-1)
*/

// #include<iostream>
// using namespace std;

// int main() {
//     int n = 5; // Number of rows in the pyramid

// // Loop for upper triangle
//     for (int line = 1; line <= n; line++) {
// // Loop for spaces before characters
//         int no_of_spaces = n - line;
//         for (int k = 0; k < no_of_spaces; k++) {
//             cout << " ";
//         }

// // Loop for characters
//         int no_of_chars = 2 * line - 1;
//         for (int j = 0; j < no_of_chars; j++) {
//             char ch = (char)('A' + j);
//             cout << ch;
//         }

//         cout << endl;
//     }

// // Loop for lower triangle
//     for (int line = n + 1; line <= 2 * n - 1; line++) {
//         // Loop for spaces before characters
//         int no_of_spaces = line - n;
//         for (int k = 0; k < no_of_spaces; k++) {
//             cout << " ";
//         }

//         // Loop for characters
//         int no_of_chars = 2 * (2 * n - line) - 1;
//         for (int j = 0; j < no_of_chars; j++) {
//             char ch = (char)('A' + j);
//             cout << ch;
//         }

//         cout << endl;
//     }

//     return 0;
// }


/*

  *
  *
*****
  *
  * 
  
*/
// input is always odd in the Q n=5 in this q consedering vertical no. of stars
// code is write but o/p is not giving

// #include <iostream>
// using namespace std;
// int main(){

//    int n=5;
//    for(int line=0;line<n;line++){
//       for(int i=0;i<n;i++){
//          if(i==n/2) cout<<"*";         
//          else if(line ==n/2) cout<<"*";
//          else cout<<" ";
         
//       }
//       cout<<"\n";
//    }
//    return 0;
// }