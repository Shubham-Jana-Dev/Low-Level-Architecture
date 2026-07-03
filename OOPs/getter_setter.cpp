//
//  g++ -std=c++17 getter_setter.cpp -o getter_setter.exe && ./getter_setter.exe
//  
//
//  Created by Shubham Jana on 27/06/26.
//

#include <iostream>
#include <vector>
class students{
private:
    std::string studentName;
    int rollNumber = 0;
    std::vector<std::string> subjects;
public:
    students(){
        studentName = "Shubham Jana";
        rollNumber = 1;
        subjects = {"Mathematics","DBMS","Operating System"};
} 
students(std::string name, int roll, std::vector<std::string> sub){
    studentName = name;
    rollNumber = roll;
    subjects = sub; 
}
//getter
std::string getStudentName(){
    return studentName;
}
//setter
void setStudentName(std::string name){
    studentName = name;
}
int getRoll(){
    return rollNumber;
}
void setrollNumber(int roll){
    rollNumber = roll;
}
std::vector<std::string> getSubjects(){
    return subjects;
}
void setSubjects(std::vector<std::string> sub){
    subjects = sub;
}
void displayDetails(){
    std::cout << "Student Name: "<< studentName<<std::endl;
    std::cout << "Student Roll Number: "<< rollNumber << std::endl;
    std::cout << "Subjects: ";
    for(std::string sub : subjects){
        std::cout << sub << " ";
    }
    std::cout<<std::endl;
}
};
int main(){
    students student1;
    student1.setStudentName("Shubham Jana");
    student1.setrollNumber(34);
    student1.setSubjects({"Computer architecture","Python","DSA"});
    student1.displayDetails();
    return 0;
}