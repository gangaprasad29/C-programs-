// /// STL(standerd templete library)  FOR ARRAYS

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[3]={2,5,6};  //basic array

//     array<int,4> a={1,2,3,4}; ///using stl
//     int size=a.size();
//     for(int i=0;i<size;i++){
//         cout<<a[i]<<" "<<endl;
//     }
//    //// operations
//    cout<<"element at 2nd index->"<<a.at(2)<<endl;
//    cout<<"empty or not->"<<a.empty()<<endl;  //write bollean vallue true(1) or false(0)
//    cout<<"first element:"<<a.front()<<endl;
//    cout<<"last element:"<<a.back()<<endl;

//     return 0;
// }




//// STL FOR VECTORS

// #include<bits/stdc++.h>
// using namespace std;
// int main(){

//     vector<int> v;
    
//     vector<int> a(5,1);
//     cout<<"print a:"<<endl;
//     for(int i:a){
//         cout<<i<<" ";
//     }
//  //// this and above same 
//     vector<int> last(a);
//     cout<<"print a:"<<endl;
//     for(int i:last){
//         cout<<i<<" ";
//     }

//     cout<<"capacity:"<<v.capacity()<<endl;
    
//     v.push_back(1);
//     cout<<"capacity:"<<v.capacity()<<endl;
    
//     v.push_back(2);
//     cout<<"capacity:"<<v.capacity()<<endl;
    
//     v.push_back(3);
//     cout<<"capacity:"<<v.capacity()<<endl;
//     cout<<"size:"<<v.size()<<endl;
    
//     cout<<"element at 2nd index:"<<v.at(2)<<endl;
//     cout<<"element at front:"<<v.front()<<endl;
//     cout<<"element at end:"<<v.back()<<endl;
    
//     cout<<"before pop:"<<endl;
//     for(int i:v){
//         cout<<i<<" ";
//     }
//     cout<<endl;

//     v.pop_back();
//     cout<<"after pop:"<<endl;
//     for(int i:v){
//         cout<<i<<" ";
//     }
    

//     cout<<"before clean size:"<<v.size()<<endl;
//     v.clear();
//     cout<<"after lear size:"<<v.size()<<endl;

//     return 0;
// }





///// DEQUE (double ended queue means insertion and deletion happens from both the ends)


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     deque<int> d;
    
//     //for insertion 2 operatioins are there 
    
//     //1. insertion from back
//     d.push_back(1);
//     // 2. insertion from front
//     d.push_front(2);

//     // for(int i:d){
//     //     cout<<i<<" ";
//     // }
//     // cout<<endl;

//     // // for removeing an element we have following operations
//     // // removing from back
//     // d.pop_back();
//     // // unlike removing from back we can remove from front also 
    
//     // for(int i:d){
//     //     cout<<i<<" ";
//     // }

//     cout<<"print first index element:"<<d.at(1)<<endl;
//     cout<<"print front element:"<<d.front()<<endl;
//     cout<<"print back  element:"<<d.back()<<endl;
//     cout<<"empty or not :"<<d.empty()<<endl;

//     cout<<"before erase:"<<d.size()<<endl;
//     d.erase(d.begin(),d.begin()+1);
//     cout<<"after erase:"<<d.size()<<endl;


//     return 0;

// }



//// LIST 

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     list<int> l;
// // copying and initilizing the list
//     list<int> n(5,100);
//      for(int i:n){
//         cout<<i<<" ";
//     }cout<<endl;

//     l.push_back(1);
//     l.push_front(2);

//     for(int i:l){
//         cout<<i<<" ";
//     }
//     cout<<"before earase:"<<endl;
//     l.erase(l.begin());
//     cout<<"after erase:";
//     for(int i:l){
//         cout<<i<<" ";
//     }cout<<endl;

//     cout<<"size of list: "<<l.size()<<endl;


//     return 0;
// }



//// STACK (last in first out principle )

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     stack<string> s;

    // s.push("Gangaprasad");
    // s.push("Nagnath");
    // s.push("Urekar");

    // cout<<"top element:"<<s.top()<<endl;
    // s.pop();
    // cout<<"top element :"<<s.top()<<endl;
    
    // cout<<"size of stack:"<<s.size()<<endl;
    // cout<<"empty or not:"<<s.empty()<<endl;
    
//     return 0;
// }


//// QUEUE

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     queue<string> q;
//     q.push("Gangaprasad");
//     q.push("Nagnath");
//     q.push("Urekar");

//     cout<<"first element:"<<q.front()<<endl;
//     q.pop();
//     cout<<"first element :"<<q.front()<<endl;
    
//     cout<<"size of queue after pop:"<<q.size()<<endl;
//     cout<<"empty or not:"<<q.empty()<<endl;
    


//     return 0;
// }


//// PIRORITY QUEUE

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     // max heap
//    priority_queue<int> maxi;
   
//    // min heap
//    priority_queue<int,vector<int>,greater<int>> mini;


//     maxi.push(1);
//     maxi.push(2);
//     maxi.push(3);
//     maxi.push(0);
//  cout<<"size:"<<maxi.size()<<endl;
//    int n=maxi.size();
//     for(int i=0;i<n;i++){
//         cout<<maxi.top()<<" ";
//         maxi.pop();
//     }cout<<endl;
    
//     mini.push(8);
//     mini.push(7);
//     mini.push(9);
//     mini.push(4);
//  cout<<"size:"<<mini.size()<<endl;
//    int m=mini.size();
//     for(int i=0;i<m;i++){
//         cout<<mini.top()<<" ";
//         mini.pop();
//     }cout<<endl;
    


//     return 0;
// }


//// SET (only unique elements are stored in set)

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     set<int> s;

//     s.insert(1);
//     s.insert(2);
//     s.insert(2);
//     s.insert(3);
//     s.insert(3);
//     s.insert(3);
//     s.insert(3);
//     s.insert(6);
//     s.insert(6);
//     s.insert(5);

//     for(int i:s){
//         cout<<i<<" ";
//     }cout<<endl;

//     s.erase(s.begin());
//     for(int i:s){
//         cout<<i<<" ";
//     }cout<<endl;

//     cout<<s.count(5)<<endl;

//     set<int>::iterator itr =s.find(5);
//     cout<<"value present ar itr:"<<*itr<<endl;


//     return 0;
// }



///// MAP  (data stored in key value pair)

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     map<int,string> m;
//     m[1]="babbar";
//     m[2]="love";
//     m[13]="kumar";

//     m.insert({5,"ganga"});

//     for(auto i:m){
//         cout<<i.first<<i.second<<endl;
//     }

//     cout<<"finding 13:"<<m.count(13)<<endl;
//     cout<<"before erase:"<<endl;
//     for(auto i:m){
//         cout<<i.first<<i.second<<endl;
//     }
//     m.erase(13);
//     cout<<"after erase:"<<endl;
//     for(auto i:m){
//         cout<<i.first<<i.second<<endl;
//     }

//     auto it=m.find(5);
//     for(auto i=it;i!=m.end();i++){
//         cout<<(*i).first<<endl;
//     }
    
//     return 0;
// }



///// STL ALGORITHMS

// for binary search using algo

#include<bits/stdc++.h>
using namespace std;
int  main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout<<"finding six:"<<binary_search(v.begin(),v.end(),6)<<endl;
    
    cout<<"lower bound:"<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"upper bound:"<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    int a=3;
    int b=5;
    cout<<max(a,b)<<endl;
    cout<<min(a,b)<<endl;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    string abcd="abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<abcd<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"after rotate"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    sort(v.begin(),v.end());
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    return 0;
}