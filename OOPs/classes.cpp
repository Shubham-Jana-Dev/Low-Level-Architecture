//
//  classes.cpp
//  
//
//  Created by Shubham Jana on 27/06/26.
//
// g++ -std=c++17 classes.cpp -o classes && ./classes
#include <iostream>

// A class in C++ is a user-defined data type that acts as a blueprint for creating objects.

// It group related variables (called data members) and functions (called member functions) into a single unit.
class Student {
public:
    std::string name;
    int age;
    void display(){
        std::cout << "Name: " << name << ", Age: "<< age << std::endl;
    }
};
int main(){
    Student s1;
    s1.name = "Shubham";
    s1.age = 19;
    s1.display();
    return 0;
}

