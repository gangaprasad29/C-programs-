// #include<bits/stdc++.h>
// using namespace std;

// int factorial(int n){
//     // base case
//     if(n==0)
//     return 1;  

//     // int chotti=factorial(n-1);
//     // int badi=n*chotti;
//     // return badi;
    
//     // OR both are equal 

//     return n*factorial(n-1);


// }

// int main(){
//     int n;
//     cin>>n;
//     int ans=factorial(n);
//     cout<<ans<<endl;
//     return 0;
// }





/////



// #include<bits/stdc++.h>
// using namespace std;
// int power(int n){
//     // base case
//     if(n==0)
//     return 1;

//     // recursive relation

//     // int chotti=power(n-1);
//     // int badi=2*chotti;
//     // return badi;

//     //OR

//     return 2*power(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     int ans=power(n);
//     cout<<"2 ki power "<<n<<" is:"<<ans<<endl;
//     return 0;
  
// }


/// to print counting like if n=5 then print 5 4 3 2 1

#include<bits/stdc++.h>
using namespace  std;
void print(int n){
    // base case 
    if(n==0){
    return ;
    }
   
   cout<<n<<endl;
   // recursive relation
   print(n-1);


}
int main(){
    int n;
    cin>>n;
    print(n);
}