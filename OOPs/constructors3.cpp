#include <iostream>
#include <vector>
#include <string>

class Student {
private:
    std::string studentName;
    int rollNumber;
    std::vector<std::string> subjects;

public:
    // Using initializer lists
    Student() : studentName("Shubham Jana"), rollNumber(1), subjects({"Mathematics", "DBMS", "Operating System"}) {}

    Student(std::string name, int roll, std::vector<std::string> sub) 
        : studentName(std::move(name)), rollNumber(roll), subjects(std::move(sub)) {}

    // Getters
    std::string getStudentName() const { return studentName; }
    int getRoll() const { return rollNumber; }
    const std::vector<std::string>& getSubjects() const { return subjects; }

    // Setters
    void setStudentName(const std::string& name) { studentName = name; }
    void setRollNumber(int roll) { rollNumber = roll; }
    void setSubjects(const std::vector<std::string>& sub) { subjects = sub; }

    void displayDetails() const {
        std::cout << "Student Name: " << studentName << "\n"
                  << "Student Roll Number: " << rollNumber << "\n"
                  << "Subjects: ";
        for (const auto& sub : subjects) {
            std::cout << sub << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    Student student1("Shubham Jana", 34, {"Computer architecture", "Python", "DSA"});
    student1.displayDetails();
    Student student3;
    student3.displayDetails();
    return 0;
}