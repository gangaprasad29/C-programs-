// #include<iostream> 
// using namespace std;
// void reachHome(int src, int dest) {
    
//     cout << "source " << src  << " destination " << dest << endl;
//     //base case
//     if(src == dest) {
//         cout << " pahuch gya " << endl;
//         return ;
//     }
//     //processing - ek step aage badhjao
//     src++;
//     //recursive call
//     reachHome(src, dest);

// }
// int main() {

//     int dest = 10;
//     int src = 1;
//     cout << endl;
//     reachHome(src, dest);
//     return 0;
// }


///// SAY DIGITS
/// FOR EX I/P= 12 O/P= one two
#include<iostream> 
using namespace std;

void sayDigit(int n, string arr[]) {
    //base case
    if(n == 0)
        return ;

    //processing 
    int digit = n % 10;
    n = n / 10;
    
    //recursive call
    sayDigit(n, arr);
    cout << arr[digit] << " ";
}
int main() {
 string arr[10] = {"zero", "one", "two", "three",
                         "four", "five", "six"
                        , "seven", "eight", "nine"};
    int n;
    cin >> n;
    cout << endl << endl << endl ;
    sayDigit(n, arr);
    cout << endl << endl << endl ;

    return 0;
}