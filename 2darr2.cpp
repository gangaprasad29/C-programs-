//// QUESTIONS ON 2D ARRAYS
//// TRANSPOSE OF A MATRIX

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int A[3][3]={{1,2,3},{4,5,6},{7,8,9}};

//    for(int i=0;i<3;i++){
//     for(int j=i;j<3;j++){
//         // swap
//         int temp=A[i][j];
//         A[i][j]=A[j][i];
//         A[j][i]=temp;
//     }
//    }
//    for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         cout<<A[i][j]<<" ";
//     }
//      cout<<endl;
//    }

//     return 0;
// }


////TRANSPOSE OF A MATRIX GIVEN BY USER

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

//     for(int i=0;i<n;i++){
//         for(int j=i;j<m;j++){
//             //swap
//            int temp=a[i][j];
//            a[i][j]=a[j][i];
//            a[j][i]=temp;
//         }
//     }
//     cout<<"transpose matrix:"<<endl;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }


////matrix multiplication

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n1,n2,n3; // for order of matrix like n1*n2 & n2*n3
//     cin >> n1 >> n2 >> n3;
//     int m1[n1][n2];
//     int m2[n2][n3];
//     for(int i=0;i<n1;i++){
//         for(int j=0;j<n2;j++){
//             cin>>m1[i][j];
//         }
//     }
//     for(int i=0;i<n2;i++){
//         for(int j=0;j<n3;j++){
//             cin>>m2[i][j];
//         }
//     }
    
//     int ans[n2][n3];
//     for(int i=0;i<n2;i++){
//         for(int j=0;j<n3;j++){
//             ans[i][j]=0;
//         }
//     }
//     cout<<"matrix is:\n";
//     for(int i=0;i<n1;i++){
//         for(int j=0;j<n3;j++){
//             for(int k=0;k<n2;k++){
//                 ans[i][j]+=m1[i][k]*m2[k][j];
//             }
//         }
//     }
//     // now print output matrix which is of  order n2*n3
//     for(int i=0;i<n1;i++){
//         for(int j=0;j<n3;j++){
//             cout<<ans[i][j]<<" ";
//         }
//      cout<<endl;
//     }
//     return 0;
// }


//.// MATRIX SEARCH( IMP ASKED IN INTERVIWEAS)
//// LINEAR SEARCH
//// with less time complexity


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int target;
    cin >> target;
    
    int a[n][m];
    
    // Input matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    
    // Start from top-right corner
    int r = 0, c = m - 1;
    bool found = false;
    
    while (r < n && c >= 0) {
        if (a[r][c] == target) {
            found = true;
            break; // Exit the loop if the target is found
        } else if (a[r][c] > target) {
            c--; // Move left if current element is greater than the target
        } else {
            r++; // Move down if current element is less than the target
        }
    }
    
    // Output result
    if (found) {
        cout << "Element is found." << endl;
    } else {
        cout << "Element does not exist." << endl;
    }
    
    return 0;
}
