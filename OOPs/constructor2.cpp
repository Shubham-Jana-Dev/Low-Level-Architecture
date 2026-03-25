/*
Constructor = Special method that is automaticaly called when an objsect
is instantiated useful for assigning values to attributes as arguments.
*/

#include <iostream>
using namespace std;
class Student{
    public:
        string name;
        int age;
        double gpa;
        string nationality;
    Student(string name, int age, double gpa, string origin){
        this -> name = name;
        this -> age = age;
        this -> gpa = gpa;
        nationality = origin;
    
    }
};
class Car{
    public:
        string make;
        string model;
        int year;
        string color;
    Car(string make, string model_name, int manufacture, string color){
        model = model_name;
        this -> make = make;
        year = manufacture;
        this -> color = color;
       }

};

int main() {
    Car car1("Tata Motor","Shiara",2025, "yellow");
    cout << car1.model << " is manufacture by " << car1.make << " on the year " << car1.year << " and it's come with " << car1.color << "." << endl;
    // Student student1("Neha", 18, 8.5, "Indian");
    // Student student2("Shubham", 19, 8.7, "Indian");
    // cout << student1.name << " is " << student1.age << " years old." << " their GPA is " << student1.gpa << "." << "And they are "<< student1.nationality << "." << endl;
    return 0;
}