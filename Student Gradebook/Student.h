#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
private:
    int studentId;
    std::string name;
    char grade;

public:
    // Constructor
    Student(int id, const std::string& studentName, char studentGrade);
    
    // Getters
    int getStudentId() const;
    std::string getName() const;
    char getGrade() const;
    
    // Setters
    void setStudentId(int id);
    void setName(const std::string& studentName);
    void setGrade(char studentGrade);
    
    // Display function
    void displayDetails() const;
};

#endif // STUDENT_H