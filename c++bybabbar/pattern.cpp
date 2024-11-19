//// while loop

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         cout<<i<<endl;
//         i++;
//     }
//     return 0;
// }


//// sum of n natural no.

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     int sum=0;
//     while(i<=n){
//         sum=sum+i;
//         i++;
//     }
//     cout<<sum<<endl;
//     return 0;
// }

//// given no. is prime no. or not

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=2;
//     while(i<=n-1){
//         if(n%i==0){
//             cout<<"not prime for"<<i<<endl;
//         }
//         else{
//             cout<<"prime for"<<i<<endl;
//         }
//         i++;
//     }
//     return 0;
// }




/////////// PATTERNS  //////////

/*
****
****
****
****
*/

////using for loop

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         cout<<"*";
//     }
//    cout<<endl;
//   }
//     return 0;
// }

//// ulsing while loop

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=0;
//     while(i<n){
//         int j=0;
//         while(j<n){
//           cout<<"*";
//           j++;
//         }
//         i++;
//     cout<<endl;
//     }
//     return 0;
// }


/*
111
222
333
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
//           cout<<i;
//           j++;
//         }
//         i++;
//     cout<<endl;
//     }
//     return 0;
// }


/*
1234
1234
1234
1234
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
//           cout<<j;
//           j++;
//         }
//         i++;
//     cout<<endl;
//     }
//     return 0;
// }

//using for loop


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


/*
321
321
321
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=3;
    while(i>=1){
        int j=3;
        while(j>=1){
          cout<<j;
          j--;
        }
        i--;
    cout<<endl;
    }
    return 0;
}