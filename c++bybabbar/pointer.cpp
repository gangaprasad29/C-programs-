// #include<iostream>
// using namespace std;

// int main () {
//     int num  = 5 ;
//     cout << num << endl;
//     // address of Operator - &
//     cout <<" address of num is " << &num << endl;

//     int *ptr = &num;
//     cout << "Address is : " << ptr << endl;
//     cout << "value is : " << *ptr << endl;

//     double d = 4.3;
//     double *p2 = &d;

//     cout << "Address is : " << p2 << endl;
//     cout << "value is : " << *p2 << endl;

//     cout << " size of integer is " << sizeof(num) << endl;
//     cout << " size of pointer is " << sizeof(ptr) << endl;
//     cout << " size of pointer is " << sizeof(p2) << endl;
//     return 0;
// }



// #include<iostream>
// using namespace std;

// int main () {

//     //pointer to int is created, and pointing to some garbage address
//     //int *p = 0; 

//     //cout << *p << endl;

    
// //     int i = 5;

// //     int *q = &i;
// //     cout << q << endl;
// //     cout << *q << endl;
// // // both are same but in different will come in mcq in coding round
// //     int *p = 0;
// //     p = &i;
// //     cout << p << endl;
// //     cout << *p << endl;
    

//    int num = 5;
//    int a = num;
//    cout << "a before " << num << endl;
//    a++;
//    cout << "a after " << num << endl;


//    int *p  = &num;
//    cout << "before " << num << endl;
//    (*p)++;
//    cout << "after " << num << endl;

//     //copying a pointer
//    int *q = p;
//    cout << p <<" - " << q << endl;
//    cout << *p <<" - " << *q << endl;

//    //important concept
//    int i = 3;
//    int *t = &i;
//    //cout <<  (*t)++ << endl;
//    *t = *t +1;
//     cout << *t << endl;

//     cout << " before t " << t << endl;
//     t = t + 1;  // address will increase by 4 (becuse it is of int type)
//     cout << " after t " << t << endl;

//     return 0;
// }




///

// #include<bits/stdc++.h>
// using namespace std;
// int main (){

// //     // int arr[10]={23,122,41,67};
// //     // // to find the address of the first location we have two methods as below 
// //     // cout<<"address of first memory block is:"<<arr<<endl;
// //     // cout<<"address of first memory block is:"<<&arr[0]<<endl;
    
    
// //     // cout<<"4th :"<<*arr<<endl;  // print value at 0th location
// //     // cout<<"5th :"<<*arr+1<<endl;  // print the increment value at first index (value  at 0thindex+1=24)
// //     // cout<<"6th :"<<*(arr+1)<<endl;  // pritn the value at 2nd index 
// //     // cout<<"7th :"<<(*arr)+1<<endl;  // print the increment value at first index

//  // // below both print same value
// //     // cout<<"8th :"<<arr[2]<<endl;  
// //     // cout<<"8th :"<<*(arr+2)<<endl;  
    
// //     // int i=3;                                                        
// //     // cout<<i[arr]<<endl;  //pritn value at 3rd index
    
// //     int temp[10] = {1,2};
// //    cout << sizeof(temp) << endl;    //will print (4*given size)
// //    cout << " 1st " <<  sizeof(*temp) << endl;  
// //    cout << " 2nd " <<  sizeof(&temp) << endl;

// //    int *ptr = &temp[0];
// //    cout << sizeof(ptr) << endl ;
// //    cout << sizeof(*ptr) << endl ;
// //    cout << sizeof(&ptr) << endl ;

    

//     int a[20]={1,2,3,5};
//     // below all give same optput
//     cout<<&a[0]<<endl;
//     cout<<&a<<endl;
//     cout<<a<<endl;

//       int arr[10];

// //ERROR
//    //arr = arr+1;

//     int *ptr = &arr[0];
//     cout << ptr << endl;
//     ptr = ptr + 1;
//     cout << ptr << endl;

//     return 0;

// } 



////// CHARACTER ARRAYS
// (character array is totally different from the int array remember imp)

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[5];
//     char ch[6]="abcde";
//     cout<<arr<<endl;  //print address of the first element 
//     cout<<ch<<endl;    

//     char *c=&ch[0];
//     // print entire string 
//     cout<<c<<endl;

//     char temp='z';
//     char *p = &temp;
//     cout<<*p<<endl;

//     return 0;
// }




/// FUNCTION IN POINTER

#include<iostream>
using namespace std;
void print(int *p) {
    cout << *p << endl; 
}

void update(int *p) {
   // p = p + 1;
   //cout << "inside "<< p <<endl;
   
   *p = *p + 1;  
}

int getSum(int *arr, int n) {

    cout << endl << "Size : " << sizeof(arr) << endl; // actual ans is 8 but is gives 4 because of 32 bit or something 

    int sum = 0;
    for(int i=0;i<n;i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {

    int value = 5;
    int *p = &value;
    print(p);

    cout <<" Before " << *p << endl;
    update(p);
    cout <<" After " << *p << endl;
    

    int arr[6] = {1,2,3,4,5,8};
    cout << "Sum is " << getSum(arr+3 ,3) << endl ;  

    return 0;
}