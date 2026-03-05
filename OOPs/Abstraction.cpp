#include <iostream>
using namespace std;
class AbstractEmployee{
public:
    virtual void AskForPromotion()=0;
};
class Employee: public AbstractEmployee{
private:
    string Name;
    string Company;
   int Age;
public:
   void setName (string name){
    Name = name;
   }
   string getName (){
        return Name;
   }
   void setCompany (string company){
        Company = company;
   }
   string getCompany(){
        return Company;
   }
   void setAge(int age){
        if(age>=18){
        Age = age;
        }
        else{
            Age = -1;
            cout << "Plese enter a valid age " << Name << endl;
        }
   }
   int getAge(){
        return Age;
   }
   Employee(string name, string company, int age){
    Name = name;
    Company = company;
    setAge(age);
   }
   void AskForPromotion(){
        if (Age>30){
            cout << Name << " got promoted! :)" << endl;
        }
        else{
            cout << Name << " better luck next time. :(" << endl;
        }
   }
};
int main(){
    Employee emp1 = Employee("Shubham","Wipro",29);
    Employee emp2 = Employee("Rohit","TCS",45);
    emp1.AskForPromotion();
    emp2.AskForPromotion();
    return 0;
}