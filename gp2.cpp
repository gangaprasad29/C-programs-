//// ARRAYS

// #include<iostream>
// using namespace std;
// int main(){
//     int array[]={1,2,3,4,5};
//     cout<<sizeof(array)<<endl; //size of array
//     cout<<sizeof(array)/sizeof(array[0])<<endl; // length of array
    
//     int array2[4];
//     cout<<array2[0]<<endl; // will give garbage values
//     cout<<array2[1]<<endl; // will give garbage values
//     cout<<array2[2]<<endl; // will give garbage values
//     cout<<array2[3]<<endl; // will give garbage values
//     return 0;
// }


 //// TRIVERSING THE ARRAY
 
// #include<iostream>
// using namespace std;
// int main(){
//     int array[]={1,2,3,4};
// // for loop
//     int size=sizeof(array)/sizeof(array[0]);
//     for(int idx=0;idx<size;idx++){
//         cout<<array[idx]<<endl;
//     }

//     // for each loop
//     for(int ele:array){
//         cout<<ele<<endl;
//     }

//     // while loop
//     int index=0; 
//     while(index<size){
//         cout<<array[index]<<endl;
//         index++;
//     }


// return 0;
// }


//// HOW TO TAKE INPUT IN ARRAY

// #include<iostream>
// using namespace std;
// int main(){
    
//     char vowels[5];
//     for(int idx=0;idx<5;idx++){
//         cin>>vowels[idx];
//     }
    
//     for(int idx=0;idx<5;idx++){
//         cout<<vowels[idx]<<",";
//     }
    
//     return 0;

// }


//// Q calaulate the sum of all elements in array

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,66,445};
//     int size=sizeof(arr)/sizeof(arr[0]);
    
//     int sum=0;
//     for(int i=0;i<size;i++){
//         sum+=arr[i];
//     }
//     cout<<sum<<endl;


//     return 0;
// }



//// Q find the max value

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,22,33,55,666};
//     int max=arr[0];
//     for(int i=0;i<5;i++){
//       if(arr[i]>max){
//         max=arr[i];
//       }
    
//     }
//     cout<<max<<endl;
//     return 0;
// }


//// LINEAR SEARCH

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={5,66,88,33,21};
//     int key=88;

//     int ans=-1;
//     for(int i=0;i<5;i++){
//         if(arr[i]==key){
//             ans=i;
//         }
//     }
//     cout<<ans<<endl;


//     return 0;
// }


//// REVERSE A NO.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int rev=0;
//     while (n>0)
//     {
//        int dig=n%10;
//        rev=rev*10+dig;
//        n=n/10;
    
//     }

//     cout<<rev<<endl;
    
    
//     return 0;
// }


//// armstrong no. or not

// #include <iostream>
// #include<math.h>
// using namespace std;

// int main() {
// int n;
// cin>>n;
// int sum=0;
// int originaln=n;
// while(n>0){
// int lastdigit= n%10;
// sum+= pow(lastdigit,3);
// n=n/10;
// }
// if(sum==originaln){
// cout<<"Armstrong number"<<endl;
// }
// else{
// cout<<"not armstrong"<<endl;
// }

// return 0;
// }

