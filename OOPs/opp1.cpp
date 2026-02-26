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
};
int main(){
    Employee employee1;
    employee1.Name = "Shubham";
    employee1.Company = "Not yet";
    employee1.Age = 19;
    employee1.IntroduceYourself();
}