// #include<bits/stdc++.h>
// using namespace std;

// class Student{
//    private:
//    string name;
//    int age;
//    int hight;

//    public:
//    int getAge(){
//     return this->age;
//    }
// };

// int main(){
//      Student first;
//      cout<<"everything is going well"<<endl;
// }



///// INHERITANCE

#include<bits/stdc++.h>
using namespace std;

class Human{
   public:
   int hight;
   int weight;
   int age;

   public:
   int getAge(){
    return this->age;
   }
   void setWeight(int w){
    this->weight=w;
   }
   
};
class Male: public Human{
    public:
    string color;  // Corrected 'strig' to 'string'
    void sleep(){
        cout<<"male sleeping"<<endl;
    }
};

int main(){
    Male object1;
    cout<<object1.age<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.hight<<endl;
    cout<<object1.color<<endl;

    object1.sleep();
}
