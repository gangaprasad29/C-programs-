// #include<iostream>
// #include<string>
// using namespace std;
    
//     class Teacher{
//         //PROPERTIES or  ATTEIBUTS
    
//     public:    
//         string name;
//         string sub;
//         string dept;
//         double salary;

//         //METHODS or MEMBER FUNCTIONS(mens we have to write function)
//         void changeDept(string newDept){
//             dept=newDept;
//         }

//     };

// int main(){
//     Teacher t1;
//     t1.name="Gangaprasad";
//     t1.sub="math";
//     t1.dept="cse";
//     t1.salary=100000;

//     cout<<t1.name<<endl; 
//     return 0;
// }



// #include <iostream>
// #include <string>
// using namespace std;

// class Teacher {
//     // PROPERTIES or ATTRIBUTES
// private:
//     double salary;   // DATA HIDING
//     double password; // DATA HIDING

// public:
//     string name;
//     string sub;
//     string dept;

//     // METHODS or MEMBER FUNCTIONS
//     void changeDept(string newDept) {
//         dept = newDept;
//     }

//     // Setter function (used to set private values)
//     void setsalary(double s) {
//         salary = s;
//     }

//     // Getter function (used to get private values)
//     double getsalary() {
//         return salary;
//     }
// };

// int main() {
//     Teacher t1;           // CONSTRUCTOR CALL (AUTONATICELY BY PROGRAMM)
//     t1.name = "Gangaprasad";
//     t1.sub = "math";
//     t1.dept = "cse";
//     t1.setsalary(100000);

//     cout << t1.name << endl;
//     cout << t1.getsalary() << endl; // Fixed function call
//     return 0;
// }




// #include <iostream>
// #include <string>
// using namespace std;

// class Teacher {
//     // PROPERTIES or ATTRIBUTES
// private:
//     double salary;   // DATA HIDING
//     double password; // DATA HIDING

// public:
// Teacher(){
//     cout<<"HI I AM CONSTRUCTOR"<<endl;
// }
//     string name;
//     string sub;
//     string dept;

//     // METHODS or MEMBER FUNCTIONS
//     void changeDept(string newDept) {
//         dept = newDept;
//     }

//     // Setter function (used to set private values)
//     void setsalary(double s) {
//         salary = s;
//     }

//     // Getter function (used to get private values)
//     double getsalary() {
//         return salary;
//     }
// };

// int main() {
//     Teacher t1;           // CONSTRUCTOR CALL (because of this only thi line "hi i am constructor is printing")
//     Teacher t2;           // CONSTRUCTOR CALL (because of this only thi line "hi i am constructor is printing")
//     t1.name = "Gangaprasad";
//     t1.sub = "math";
//     t1.dept = "cse";
//     t1.setsalary(100000);

//     cout << t1.name << endl;
//     cout << t1.getsalary() << endl; // Fixed function call
//     return 0;
// }



//// INITIALISATION OF CONSTRUCTOR


// #include <iostream>
// #include <string>
// using namespace std;

// class Teacher {
//     // PROPERTIES or ATTRIBUTES
// private:
//     double salary;   // DATA HIDING
//     double password; // DATA HIDING

// public:
// Teacher(){
//     dept="computer science & engineering";
// }
//     string name;
//     string sub;
//     string dept;

//     // METHODS or MEMBER FUNCTIONS
//     void changeDept(string newDept) {
//         dept = newDept;
//     }

//     // Setter function (used to set private values)
//     void setsalary(double s) {
//         salary = s;
//     }

//     // Getter function (used to get private values)
//     double getsalary() {
//         return salary;
//     }
// };

// int main() {
//     Teacher t1;           // CONSTRUCTOR CALL
//     t1.name = "Gangaprasad";
//     t1.sub = "math";

//     t1.setsalary(100000);

//     cout << t1.dept << endl;
    
//     return 0;
// }


//// type of constructor 1} non parameterised constructer
//// 2} parameterised constructor

// #include <iostream>
// #include <string>
// using namespace std;

// class Teacher {
//     // PROPERTIES or ATTRIBUTES
// private:
//     double salary;   // DATA HIDING
    

// public:
// // non parameterised constructor(because no parameters are there in the parenthesis)
// Teacher(){
//     dept="computer science & engineering";
// }
// // parameterised constructor
// Teacher(string n,string d,string s,double sal){
//     name=n;
//     dept=d;
//     sub=s;
//     salary=sal;
// }
//     string name;
//     string sub;
//     string dept;

//     // METHODS or MEMBER FUNCTIONS
//     void changeDept(string newDept) {
//         dept = newDept;
//     }

//     void getInfo() {
//         cout<<"name:"<<name<<endl;
//         cout<<"sub:"<<sub<<endl;
//     }
// };

// int main() {
//     Teacher t1("Prasad","CSE","C++",200000);           // CONSTRUCTOR CALL

//     cout << t1.dept << endl;
    
//     return 0;
// }


