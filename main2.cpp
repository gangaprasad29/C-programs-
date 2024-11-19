// use of <bits/stdc++.h>
// For example to use sqrt( ) function, in <bits/stdc++.h> header file we need not have to write <cmath> header file in the code.

#include <bits/stdc++.h>
using namespace std;

int main() {

    cout << sqrt(25); 
    return 0;
}

//Compilation time 0.005s
//Code submitted by Susobhan AKhuli


//But if we use <iostream> header file, we have to write <cmath> header file to run the sqrt( ) function otherwise compiler shows that ‘sqrt’ was not declared in this scope.

#include <iostream>
#include <cmath>
using namespace std;

int main() {

    cout << sqrt(25);
    return 0;
}

//Compilation time 0.003s
//Code submitted by Susobhan AKhuli

