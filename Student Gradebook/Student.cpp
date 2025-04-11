#include "Student.h"
#include <iostream>

// Constructor implementation
Student::Student(int id, const std::string& studentName, char studentGrade) {
    studentId = id;
    name = studentName;
    grade = studentGrade;
}

// Getter implementations
int Student::getStudentId() const {
    return studentId;
}

std::string Student::getName() const {
    return name;
}

char Student::getGrade() const {
    return grade;
}

// Setter implementations
void Student::setStudentId(int id) {
    studentId = id;
}

void Student::setName(const std::string& studentName) {
    name = studentName;
}

void Student::setGrade(char studentGrade) {
    grade = studentGrade;
}

// Display function implementation
void Student::displayDetails() const {
    std::cout << "Student ID: " << studentId << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Grade: " << grade << std::endl;
    std::cout << "------------------------" << std::endl;
}