/*
Challenge 3: The Student Portal (The "Validation" Level)

The Goal: Use multiple setters to control a complex object.

Private Members: StudentName, RollNumber, GPA.

Rules:

setGPA(double gpa): Must be between 0.0 and 4.0. If someone enters 5.0, set it 
to 0 and print an error.

setRollNumber(int roll): Must be a 4-digit number (between 1000 and 9999).

The Professional Touch: Create a function isHonorStudent() that returns true if 
the GPA is above 3.5, and false otherwise.

Why these will make you an expert:

Challenge 3 teaches you Data Integrity (preventing "impossible" data like a 5.0 GPA).
*/
#include <iostream>
using namespace std;
class student_validation{
private: 
    string StudentName;
    int StudentRoll;
    double StudentGPA;
public:
    void setName(string name){
        StudentName = name;
    }
    string getName(){
        return StudentName;
    }
    void setRoll(int roll){
        if(1000<=roll && roll<=9999){
            StudentRoll = roll;
        }
        else{
            StudentRoll = -1;
            cout << " Invalid Roll! please enter a valid Roll number." << endl;
        }
    }
    int getRoll(){
        return StudentRoll;
    }
    void setGPA (double gpa){
        if (0.0<=gpa && gpa<=4.0){
            StudentGPA = gpa;
        }
        else{
            StudentGPA = -1;
            cout << " Invalid GPA! please enter a vaid GPA (0.0 to 4.0). " << endl;
        }
    }
    double getGPA(){
        return StudentGPA;
    }
    void isHonorStudent(){
        if (StudentGPA > 3.5){
            cout << StudentName << ", welcome to the 0.1%, club. You are the one of the best students. " << endl; 
        }
        else{
            cout << StudentName << ", better luck in the next semester." << endl;
        }
    }
    student_validation(string name, int roll, double gpa){
        StudentName = name;
        if(1000<=roll && roll<=9999){
            StudentRoll = roll;
        }
        else{
            StudentRoll = -1;
            cout << " Invalid Roll! please enter a valid Roll number." << endl;
        }
        if (0.0<=gpa && gpa<=4.0){
            StudentGPA = gpa;
        }
        else{
            StudentGPA = -1;
            cout << " Invalid GPA! please enter a valid GPA (0.0 to 4.0). " << endl;
        }
    }
};
int main(){
    student_validation student34 = student_validation("Bikash",1034,3.49);
    student34.isHonorStudent();
    student34.setGPA(4.0);
    student34.setName("Sukamal");
    student34.setRoll(4434);
    student34.isHonorStudent();
    return 0;
}