//// Q} given a string which is combination of upper and lower case letters 
////    concvert it into upper and lower 


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string str="GanGapRasad";

//     //// for converting in upper case
    
//     for(int i=0;i<str.size();i++){
//         if(str[i]>='a' && str[i]<='z'){
//             str[i]-=32;
//         }
//     }
//     cout<<str<<endl;

//     //// for converting in upper case
    
//     for(int i=0;i<str.size();i++){
//         if(str[i]>='A' && str[i]<='Z'){
//             str[i]+=32;
//         }
//     }
//     cout<<str<<endl;

//     return 0;
// }


///// using inbuilt functions


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s="dhaRmabad";

//     transform(s.begin(),s.end(), s.begin(), :: toupper);
//     cout<<s<<endl;

//     transform(s.begin(),s.end(), s.begin(), :: tolower);
//     cout<<s<<endl;

//     return 0;
// }



//// Q} forn the biggest number from the numeric string

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s="544654354";

//     sort(s.begin(),s.end(), greater<int>());
//     cout<<s<<endl;

//     return 0;
// }


//// Q} in an given string print the no of maximum time occured character


#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="safnhdkfasbclsdhbd";
    int freq[26];

    for(int i=0;i<26;i++){
        freq[i]=0;
    }
    for(int i=0;i<s.size();i++){
        freq[s[i]-'a']++;
    }
    char ans='a';
    int maxF=0;
    for(int i=0;i<26;i++){
        if(freq[i]>maxF){
            maxF=freq[i];
            ans=i+'a';
        }
    }
  cout<<maxF<<" "<<ans<<endl;
    return 0;
}