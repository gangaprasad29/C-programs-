 // whether 1 is present in the array or not ?

#include<bits/stdc++.h>
using namespace std;
bool search(int arr[],int n,int key){
for(int i=0;i<n;i++){
 if(arr[i]==key){
    return 1;
 }
}
return 0;
}

int main(){
 int arr[10]={5,7,-2,10,22,-2,0,5,22,1};
 
 cout<<"enter the key "<<endl;
 int key ;
 cin>>key;

 bool found=search(arr,10,1);
 if(found){
    cout<<"key is present "<<endl;
 }
 else
 {
    cout<<"key is absent"<<endl;
 }

 return 0;
}
