// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a=10;
//     int* aptr=&a;

//     cout<<*aptr<<endl;
//     *aptr=20;
//     cout<<a<<endl;
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a=10;
//     int* aptr=&a;

//     cout<<aptr<<endl;
//     aptr++;
//     cout<<aptr<<endl;  // print address which 4 more then previous cout statement because of int (4 byte)
//     return 0;
// }

//// pointers as an arrays

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     // int a=10;
//     // int* aptr=&a;

//     // cout<<*aptr<<endl;
//     // *aptr=20;
//     // cout<<a<<endl;

//     int arr[]={10,20,30};
//     cout<<*arr<<endl;

//     int *ptr=arr;
//     for(int i=0;i<3;i++){
//         // cout<<*ptr<<endl;
//         // ptr++;
//         //// OR
//         cout<<*(arr+i)<<endl;
//     }

//     return 0;
// }


////POINTER TO POINTER
/// calll by reference

// #include<bits/stdc++.h>
// using namespace std;
// void swap(int *a,int *b){
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }
// int main(){
//     int a=2;
//     int b=4;

//     swap(&a,&b);
//     cout<<a<<" "<<b<<endl;;
//     return 0;
// }
