// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     char arr[100]="apple";
//     int i=0;

//     while(arr[i] != '\0'){
//         cout<<arr[i]<<endl;
//         i++;
//     }
//     return 0;
// }

// taking input

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     char arr[100];
//     cin>>arr;

//     cout<<arr[2];
//     return 0;
// }



////check palendroms

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     char arr[n + 1];
//     cin >> arr;

//     bool isPalindrome = true;

//     for (int i = 0; i < n / 2; i++) {
//         if (arr[i] != arr[n - 1 - i]) {
//             isPalindrome = false;
//             break;
//         }
//     }

//     if (isPalindrome) {
//         cout << "palindrome" << endl;
//     } else {
//         cout << "not a palindrome" << endl;
//     }

//     return 0;
// }


/// find largest word in a sentense

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); // To ignore the newline character left in the buffer

    char arr[n + 1];
    
    // For taking sentence input
    cin.getline(arr, n + 1); // Reading the full line including spaces

    int i = 0;
    int currentLength = 0;
    int maxLength = 0;
    int maxLengthStart = 0;
    int currentStart = 0;

    while (true) {
        if (arr[i] == ' ' || arr[i] == '\0') {
            if (currentLength > maxLength) {
                maxLength = currentLength;
                maxLengthStart = currentStart;
            }
            currentLength = 0;
            if (arr[i] == '\0') {
                break;
            }
        } else {
            if (currentLength == 0) {
                currentStart = i;
            }
            currentLength++;
        }
        i++;
    }

    // Check the last word
    if (currentLength > maxLength) {
        maxLength = currentLength;
        maxLengthStart = currentStart;
    }

    cout << "Length of the longest word: " << maxLength << endl;
    cout << "Longest word: ";
    for (int j = maxLengthStart; j < maxLengthStart + maxLength; j++) {
        cout << arr[j];
    }
    cout << endl;

    return 0;
}

