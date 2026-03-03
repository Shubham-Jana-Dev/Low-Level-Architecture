 #include <iostream>
using namespace std;
class Employee {
private:
    string Name;
    string Company;
    int Age;
public:
    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }
    void setCompany(string company){
        Company = company;
    }
    string getCompany(){
        return Company;
    }
    void setAge(int age){
        Age = age;
    }
    int getAge(){
        return Age;
    }
    void IntroduceYourself(){
        cout << "Hello My name is " << Name << endl;
        cout << "I am workin on " << Company << endl;
        cout << "I am " << Age << " years old." << endl;
    }
    Employee(string name, string company, int age){ // it's call the object constructor 
        Name = name;
        Company = company;
        if(age>=18){
        Age = age;
        }
        else{
            Age = -1;
           cout << age << " is in not valid for " << name << endl;
        }
    }  // if we remove this block then we have to uncoment the initilisation lins billow
};
int main(){
    Employee employee1 = Employee("Shubham","Not Yet",19);
    Employee employee2 = Employee("Sukamal","Wipro",22);
    Employee employee3 = Employee("Nikhilesh"," ",12);
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
    employee1.setAge(23);
    cout<<employee1.getName() << " is "<<employee1.getAge() << " years old." << endl;
    employee1.setCompany("HCL");
    cout << employee1.getName() << " works in " << employee1.getCompany() << endl;
    employee2.setAge(16);

    employee3.setName("Nikhilesh");
    // employee3.setAge(25);
    employee3.setCompany("Google");
    cout << employee2.getName() << " is " << employee2.getAge() << " years old." << "\n" << "He works in" << employee2.getCompany() << endl;
    cout << employee3.getName() << " is " << employee3.getAge() << " years old." << "\n" << employee3.getName() << " works in " << employee3.getCompany() << endl;
    // cout << employee4.getName() << endl;
}