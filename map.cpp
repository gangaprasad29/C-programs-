
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int>marksmap;
    marksmap["Gangaprasd"]=99;
    marksmap["Ganga"]=90;
    marksmap["prasd"]=91;
    map<string,int> :: iterator iter;
    for(iter=marksmap.begin();iter!=marksmap.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";

    }
     
    return 0;
}