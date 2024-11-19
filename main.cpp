// #include <iostream>   // statements starts from # called pre processor directors and the iostream file is the hadder file
// using namespace std;  // tell us to use standerd form of i/o functions 
// int main()            // it is a function 
// {
//     cout<<"Hello world"<< endl;
//     cout<<"Gangaprasad"<< endl;
//     return 0;// OR system("pause>0");
// }

//// basic c++ program

// # include<iostream> // it is a hadder file
// using namespace std;

// int main(){
//     int age;
//     cout<<"how old are you ?";
//     cin>> age;
//     cout<<"in 10 years rou are going to be:"<<age+10;
// }

//// ASK USER TO OUTOUT DATA

// # include<iostream> // it is a hadder file
// using namespace std;

// int main(){
    
//     cout<<"hello world"<<endl;
//     cout<<"my name is Gangaprasad"<<endl;
//     cout<<"today is monday"<<endl;
//     return 0;
// }

//// VARIABLES,datatype and input by user

// # include<iostream> // it is a hadder file
// using namespace std;

// int main(){
//     float lpa;                           //we can not use space in variable name
//     cout<<"enter your annual_salary:";
//     cin>> lpa;                          //input by user
//     float monthly_salary=lpa/12;
//     cout<<"your monthly salary is:"<<monthly_salary<<endl;
//     cout<<"in 10 years you will earn:"<<lpa*10;
     

//     return 0;
// }



// #include<iostream>
// using namespace std;

// int main(){
//     int yob=2004;
//     char gender='m';
//     float cgpa=8.5;
//     double balance =12253635134; //used for large no.
    
//     cout<<"size of int is:"<<sizeof(int)<<"byte\n";
//     cout<<"int min value is :"<<INT8_MIN<<endl;
//     cout<<"int max value is: "<<INT8_MAX<<endl;
//     cout<<"size of unsigned int is"<<sizeof(unsigned int)<<"byte\n";
//     cout<<"uint max value is: "<<UINT16_MAX<<endl;

//     return 0;

// }



// L3 to L5 one shot ********************

// VARIABLES (which are used to store data )
// variables are named storage that contain some value and this value can be change

// basic memory unit 1. bit(0 & 1) , 2. 1byte=8bit, 3. 1kilo byte= 1024 byte,1meghaB..=1024kb,1gb=1024mb

// DATA TYPE
/*
1. int  (use 4 byte in memory=32 bit) range(0 to (2^32)-1 )for +ve(unsigned) , for signed (-2^31 to (2^31)-1)
2. char (like a,b,d,s they use 1 byte in memory)
3. Bollean ( T or F)
4. float(precision upto 7 decimals)
5. double(precision more than 7 decimals upto 15)
*/


// #include<iostream>
// using namespace std;
// int main()
// {
//     //for int data type
//     int apples=5;
//     cout<<apples<<endl;
//     cout<<"size of int:"<<sizeof(apples)<<endl;

//     char sign='&';
//     cout<<sign<<endl;
//     cout<<"size of char:"<<sizeof(sign)<<endl;
    
//     bool flag=true;
//     cout<<flag<<endl;
//     cout<<"size of bool:"<<sizeof(flag)<<endl;

//     float score=3.14;
//     cout<<score<<endl;
//     cout<<"size of float:"<<sizeof(score)<<endl;

// return 0;

// }


// TAKING INPUT FROM USER

// #include <iostream>
// using namespace std;

// int main() {

//     cout <<"enter a number";

//     int num;
//     cin>>num;
//     cout<<"the rntered no. is :"<<num<<endl;
//     return 0;
// }


//Q

// #include <iostream>
// using namespace std;

// int main() {

//     int a;
//     int b;
//     cin>>a>>b;
//     int sum=a+b;
//     cout<<"sum:"<<sum<<endl;
//     return 0;
// }


// switch case*******

// #include <iostream>
// using namespace std;

// int main() {

//     int a,b;
//     cin>>a>>b;
//     cout<<"value of no.1 is:"<<a<<endl;
//     cout<<"value of no.2 is:"<<b<<endl;
    
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;


//     cout<<"after swaping value of no.1 is:"<<a<<endl;
//     cout<<"after swaping value of no.2 is:"<<b<<endl;
    

//     return 0;
// }


//OPERATORS

// // CPP Program to demonstrate the Binary Operators
// #include <iostream>
// using namespace std;

// int main()
// {
//     int a = 8, b = 3;

//     // Addition operator
//     cout << "a + b = " << (a + b) << endl;
  
//     // Subtraction operator
//     cout << "a - b = " << (a - b) << endl;
  
//     // Multiplication operator
//     cout << "a * b = " << (a * b) << endl;
  
//     // Division operator
//     cout << "a / b = " << (a / b) << endl;
  
//     // Modulo operator
//     cout << "a % b = " << (a % b) << endl;

//     return 0;
// }

// AND OTHER OPERATORS STUDY FROM GFG************

//  USE OF Floor(a){which give largest int which is <=a} & Cell(a)  {which give smallest int which is >=a}
// for ex. floor(3.14)=3
// for ex. ceil(3.14)=4

// TERNARY OPERATORS *( condition? expression1:expression2)

// #include<iostream>
// using namespace std;
// int main()
// {
// int a=5;
// int b=6;
// int max;

// a>b? max=a:max=b;
// cout<<max<<endl;
// return 0;
// }







