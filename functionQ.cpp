// Q1} sum of first n natural numbers formula= n(n+1)/2

// #include<iostream>
// using namespace std;

// int sum(int n){
//     int ans=0;
//     for(int i=1;i<=n;i++){
//         ans+=i;
//     }
//         return ans;
// }
// int main(){
//     int n;
//     cin>>n;

//     cout<<sum(n)<<endl;


//     return 0;
// }


/// check whether a given triplet is a pythogorean triplet or not


// #include <iostream>
// using namespace std;

// bool check(int x, int y, int z) {
//     int a, b, c;

//     // Find the maximum value among x, y, and z
//     if (x >= y && x >= z) {
//         a = x;
//         b = y;
//         c = z;
//     } else if (y >= x && y >= z) {
//         a = y;
//         b = x;
//         c = z;
//     } else {
//         a = z;
//         b = x;
//         c = y;
//     }

//     // Check if a^2 == b^2 + c^2
//     return (a * a == b * b + c * c);
// }

// int main() {
//     int x, y, z;
//     cin >> x >> y >> z;

//     if (check(x, y, z)) {
//         cout << "pythagorean triplet" << endl;
//     } else {
//         cout << "not a pythagorean triplet" << endl;
//     }

//     return 0;
// }


////CONVERSIONS
//// Q} decimal to binary

// #include<iostream>
// using namespace std;
// int binarytoDecimal(int n){
//     int ans=0;
//     int x=1;
//     while(n>0){
//         int y=n%10;
//         ans+=x*y;
//         x*=2;
//         n/=10;
//     }
//     return ans;
    
// }
// int main(){
//     int n;
//     cin>>n;

//     cout<<binarytoDecimal(n)<<endl;


//     return 0;
// }


// #include<iostream>
// using namespace std;
// int octaltoDecimal(int n){
//     int ans=0;
//     int x=1;
//     while(n>0){
//         int y=n%10;
//         ans+=x*y;
//         x*=8;
//         n/=10;
//     }
//     return ans;
    
// }
// int main(){
//     int n;
//     cin>>n;

//     cout<<octaltoDecimal(n)<<endl;


//     return 0;
// }



// #include<iostream>
// #include<string>
// using namespace std;
// int hexadecimaltoDecimal(string n){
//     int ans=0;
//     int x=1;
//     int s=n.size();
//     for(int i=s-1;i>=0;i--){
//        if(n[i]>='0'&& n[i]<='9'){
//         ans+=x*(n[i]-'0');
//        }
//        else if(n[i]>='A'&& n[i]<='F'){
//         ans+=x*(n[i]-'A'+10);
//        }
//        x*=16;
//     }
//     return ans;
    
// }
// int main(){
//     string n;
//     cin>>n;

//     cout<<hexadecimaltoDecimal(n)<<endl;


//     return 0;
// }




// #include<iostream>
// using namespace std;
// int decimaltoBinary(int n){
//     int ans=0;
//     int x=1;
//     while(x<=n)
//         x*=2;
//         x/=2;
    
//     while (x>0)
//     {
//         int lastDigit=n/x;
//         n-=lastDigit*x;
//         x/=2;
//         ans=ans*10+lastDigit;
//     }
    
//     return ans;
    
// }
// int main(){
//     int n;
//     cin>>n;

//     cout<<decimaltoBinary(n)<<endl;


//     return 0;
// }


// #include<iostream>
// using namespace std;
// int decimaltoOctal(int n){
//     int ans=0;
//     int x=1;
//     while(x<=n)
//         x*=8;
//         x/=8;
    
//     while (x>0)
//     {
//         int lastDigit=n/x;
//         n-=lastDigit*x;
//         x/=8;
//         ans=ans*10+lastDigit;
//     }
    
//     return ans;
    
// }
// int main(){
//     int n;
//     cin>>n;

//     cout<<decimaltoOctal(n)<<endl;


//     return 0;
// }


// #include<iostream>
// #include<string>
// using namespace std;
// string decimaltoHexadecimal(int n){
//     int x=1;
//     string ans="";
//     while(x<=n)
//         x*=16;
//         x/=16;
    
//     while (x>0)
//     {
//         int lastDigit=n/x;
//         n-=lastDigit*x;
//         x/=16;
//         if(lastDigit<=9){
//             ans=ans+to_string(lastDigit);
//         }
//         else{
//             char c='A'+lastDigit-10;
//             ans.push_back(c);
//         }
//     }
    
//     return ans;
    
// }
// int main(){
//     int n;
//     cin>>n;

//     cout<<decimaltoHexadecimal(n)<<endl;


//     return 0;
// }



//// ADD TWO BINARY NUMBERS 

/* HINT 
CASE 1=> both dig are zero a) 0 if no previous carry 
                           b) 1 if previous carry 

CASE 1=> ONE  dig IS  zero AND ANOTHER IS 1 a) 0 if  previous carry generate further carry  
                           b) 1 if no previous carry no further carry generate 

CASE 1=> both dig are 1 a) 0 if no previous carry         CARRY WILL BE GENERATED
                           b) 1 if previous carry     CARRY WILL BE GENERATED

*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Function to add two binary numbers represented as integers
string addBinary(int a, int b) {
    string result;
    int carry = 0;
    
    // Adding binary numbers bit by bit
    while (a > 0 || b > 0 || carry) {
        int sum = (a % 10) + (b % 10) + carry;
        result += (sum % 2) + '0'; // Append the current bit
        carry = sum / 2; // Calculate carry for the next bit
        a /= 10; // Move to the next bit
        b /= 10; // Move to the next bit
    }
    
    // The result is in reverse order, so reverse it back
    reverse(result.begin(), result.end());
    
    return result;
}

int main() {
    int a, b;
    cout << "Enter the first binary number: ";
    cin >> a;
    cout << "Enter the second binary number: ";
    cin >> b;

    // Convert the numbers to binary strings and add them
    string result = addBinary(a, b);
    cout << "The sum of the two binary numbers is: " << result << endl;

    return 0;
}
