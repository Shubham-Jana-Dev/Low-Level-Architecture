#include <iostream>
using namespace std;
class Employee {
public:
    string Name;
    string Company;
    int Age;

    void IntroduceYourself(){
        cout << "Hello My name is " << Name << endl;
        cout << "I am workin on " << Company << endl;
        cout << "I am " << Age << " years old." << endl;
    }
    Employee(string name, string company, int age){ // it's call the object constructor 
        Name = name;
        Company = company;
        Age = age;
    }  // if we remove this block then we have to uncoment the initilisation lins billow
};
int main(){
    Employee employee1 = Employee("Shubham","Not Yet",19);

    // Employee employee1;
    // employee1.Name = "Shubham";
    // employee1.Company = "Not yet";
    // employee1.Age = 19;
    employee1.IntroduceYourself();

    // Employee employee2;
    // employee2.Name = "Rohit";
    // employee2.Company = "TCS";
    // employee2.Age = 22;
    // employee2.IntroduceYourself();
}