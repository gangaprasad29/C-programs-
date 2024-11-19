//// different ways to take input string 

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string str;
//     cin>>str;
//     cout<<str;
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string str;
//     string str1(5,'n');
//     cout<<str1<<endl;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string str="gangaprasad";
//     cout<<str;
//    return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string str;
//     getline(cin,str);  // print (gangaprasad urekar)
//     cout<<str<<endl;
//    return 0;
// }


//// different functions of strings  

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string str;
//     string s1="ganga";
//     string s2="prasad";
//     // //s1.append(s2);
//     // s1+=s2;
//     // cout<<s1;

//     // cout<<s1[3]<<endl;

//     s2.clear();
//     cout<<s2<<endl;
//    return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s1="abc";
//     string s2="abc";
    
//     cout<<s2.compare(s1)<<endl;
    
    
//    return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s1="ganga";
//     string s2="prasad";
//     s1.clear();
//     if(s1.empty()){
//         cout<<"string is empty"<<endl;
    
//       if(!s2.empty()){
//         cout<<"string is not empty"<<endl;
//     }
//     }

    
//    return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s1="gangaprasad";
//     //if i want to erase "ngap"
//     s1.erase(3,4);//(index, kitne delete krne hai)

//     cout<<s1<<endl;
//    return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s1="gangaprasad";
      
//     cout<<s1.find("sa")<<endl; 
//    return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s1="gangaprasad";
   
//     s1.insert(5,"bhau");
//     cout<<s1<<endl;
    
//     cout<<s1.size()<<endl; //or length() is also valid

    
//     for(int i=0;i<s1.size();i++){
//         cout<<s1[i]<<endl;
//     }
//    return 0;
// }

////substring 

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s1="gangaprasad";
   
//     string s=s1.substr(7,4);
//     cout<<s<<endl;
    
//    return 0;
// }

//// string to integer

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s1="2004";
//     int  x = stoi(s1);
//     cout<<x+2<<endl;
    
//    return 0;
// }

/// integer to string

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int x=2004;
//     cout<<to_string(x)+"B"<<endl;
    
//    return 0;
// }

////sorting a string

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1="gangaprasad";
    sort(s1.begin(),s1.end());
    cout<<s1<<endl;
    
   return 0;
}