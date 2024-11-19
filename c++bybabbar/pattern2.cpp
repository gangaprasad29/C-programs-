/*
123
456
789
*/

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     int count=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//           cout<<count<<" ";
//           count++;
//           j++;
//         }
//         i++;
//     cout<<endl;
//     }
//     return 0;
// }


/*
*
**
***
****
*/

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
    
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//           cout<<"*";
//           j++;
//         }
//         i++;
//     cout<<endl;
//     }
//     return 0;
// }



/*
1
22
333
4444
*/

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
    
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//           cout<<i;
//           j++;
//         }
//         i++;
//     cout<<endl;
//     }
//     return 0;
// }


/*
1
23
456
78910
*/

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     int count=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//           cout<<count<<" ";          
//           count++;
//           j++;
//         }
//         i++;
//     cout<<endl;
//     }
//     return 0;
// }


// OR 

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
        
//         while(j<=i){
//           cout<<(i+j-1);
//           j++;
          
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }

/*
1
21
321
4321
*/

//  #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
        
//         while(j<=i){
//           cout<<(i-j+1);
//           j++;
        
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }

/*
AAA
BBB
CCC
*/

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
        
//         while(j<=n){
//           char ch='A'+i-1;
//           cout<<ch;
//           j++;
          
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }


/*
ABC
DEF
GHI
*/

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     char ch='A';
//     while(i<=n){
//         int j=1;
//         while(j<=n){
         
//           cout<<ch;
//           ch++;
//           j++;
          
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }


/*
ABC
BCD
CDE
*/

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
    
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//          char ch='A'+i+j-2;
//           cout<<ch;
//           ch++;
//           j++;
          
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }

/*
A
BB
CCC
*/


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
    
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//          char ch='A'+i-1;
//           cout<<ch;
//           ch++;
//           j++;
          
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }


/*
A
BC
DEF
GHIJ
*/

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   int i=1;
//   char ch='A';
//   while(i<=n){
//     int j=1;
//     while(j<=i){
//      cout<<ch<<" ";
//      ch++;
//      j++;
//     }
//     i++;
//     cout<<endl;
//   }
//   return 0;
// }


/*
A
BC
CDE
DEFG
*/


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   int i=1;
//   while(i<=n){
//     int j=1;
//     while(j<=i){
//      char ch='A'+i+j-2;
//      cout<<ch<<" ";
//      ch++;
//      j++;
//     }
//     i++;
//     cout<<endl;
//   }
//   return 0;
// }


/*
   *
  **
 ***
****  
*/


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   int i=1;
  
//   while(i<=n){
//     int j=1;
//     int space=n-i;
//     while(space){
//     cout<<" ";
//     space--;
//     }
//     while(j<=i){
//      cout<<"*";
     
//      j++;
//     }
//     i++;
//     cout<<endl;
//   }
//   return 0;
// }



/*
****
***
**
* 
*/


// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n; // Read the number of rows

//     int i = n; // Start with the number of rows
//     while (i >= 1) { // Loop from n down to 1
//         int j = 1;
//         while (j <= i) { // Print stars for the current row
//             cout << "*";
//             j++; // Increment j to move to the next column
//         }
//         cout << endl; // Move to the next line
//         i--; // Move to the next row (decrease number of stars)
//     }

//     return 0;
// }



/*
****
 ***
  **
   *
*/


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   int i=1;
  
//   while(i<=n){
//     int j=1;
//     int space=i-1;
//     while(space){
//     cout<<" ";
//     space--;
//     }
//     while(j<=n-i+1){
//      cout<<"*";
     
//      j++;
//     }
//     i++;
//     cout<<endl;
//   }
//   return 0;
// }



/*
   1
  23
 456
78910  
*/

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
//    int i=1;
//    int count=1;
//    while(i<=n){
//       int space=n-i;
//       while(space){
//          cout<<" ";
//          space--;
//       }
//       int j=1;
//       while(j<=i){
//          cout<<count;
//          count++;
//          j++;
//       }
//       i++;
//       cout<<endl;
//    }
//    return 0;
// }

/*
   1
 2   3
4  5  6   only one change compaired to above code (" ")
*/ 

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
//    int i=1;
//    int count=1;
//    while(i<=n){
//       int space=n-i;
//       while(space){
//          cout<<" ";
//          space--;
//       }
//       int j=1;
//       while(j<=i){
//          cout<<count<<" ";
//          count++;
//          j++;
//       }
//       i++;
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

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
//    int i=1;
   
//    while(i<=n){
//       // print space
//       int space=n-i;
//       while(space){
//          cout<<" ";
//          space--;
//       }
//       // to print 1st triangle
//       int j=1;
//       while(j<=i){
//          cout<<j;
        
//          j++;
//       }
//       int start=i-1;
//       while(start){
//          cout<<start;
//          start--;
//       }
//       i++;
//       cout<<endl;
//    }
//    return 0;
// }



/*
1234554321
1234**4321
123****321
12******21
1********1         n=5
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int i=1;
   
   while(i<=n){
      // part 1: number from 1 to n-i+1
      int j=1;
      while(j<=n-i+1){
         cout<<j<<" ";
        
         j++;
      }
      //part 2: start (i-1)*2 times
      j=1;
      while(j<=(i-1)*2){
         cout<<"* ";
         j++;
      }
      // no from n-i+1 to 1
      j=n-i+1;
      while(j>=1){
         cout<<j<<" ";
         j--;
      }
      
      i++;
      cout<<endl;
   }
   return 0;
}