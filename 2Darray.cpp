// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,m;
//     cin >> n >> m;
//     int a[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>a[i][j];
//         }
//     }
//     cout<<"matrix is:\n";
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//// Q} SEARCHING A MATRIX

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,m;
//     cin >> n >> m;
//     int a[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>a[i][j];
//         }
//     }
//     cout<<"matrix is:\n";
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     int x;
//     cin>>x;

//     bool flag=false;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(a[i][j]==x){
//                 cout<<i<<" "<<j<<endl;
//                 flag=true;
//             }
//         }
//     }
//      if(flag){
//         cout<<"element is found\n";
    
//      }
//      else{
//         cout<<"element is not found\n";
//      }
//     return 0;
// }


//// Q} SPIRAL ORDER MATRIX

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    // Spiral order print
    int row_start = 0, row_end = n - 1;
    int column_start = 0, column_end = m - 1;

    while (row_start <= row_end && column_start <= column_end) {
        // Print the top row(starting row)
        for (int col = column_start; col <= column_end; col++) {
            cout << a[row_start][col] << " ";
        }
        row_start++;

        // Print the right column (for column end)
        for (int row = row_start; row <= row_end; row++) {
            cout << a[row][column_end] << " ";
        }
        column_end--;

        // Print the bottom row if there are rows left
        if (row_start <= row_end) {
            for (int col = column_end; col >= column_start; col--) {
                cout << a[row_end][col] << " ";
            }
            row_end--;
        }

        // Print the left column if there are columns left
        if (column_start <= column_end) {
            for (int row = row_end; row >= row_start; row--) {
                cout << a[row][column_start] << " ";
            }
            column_start++;
        }
    }

    return 0;
}

