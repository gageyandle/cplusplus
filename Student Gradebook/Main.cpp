#include <iostream>
#include "Student.h"

int main() {
    // Create an array of Student objects
    Student students[] = {
        Student(1001, "John Smith", 'A'),
        Student(1002, "Emma Johnson", 'B'),
        Student(1003, "Michael Brown", 'A'),
        Student(1004, "Sophia Davis", 'C'),
        Student(1005, "James Wilson", 'B')
    };

    const int numStudents = sizeof(students) / sizeof(students[0]);
    std::cout << "Grade Book - Student Details (" << numStudents << " students)" << std::endl;
    std::cout << "=========================" << std::endl;
    
    for (int i = 0; i < numStudents; i++) {
        students[i].displayDetails();
    }
    
    return 0;
}