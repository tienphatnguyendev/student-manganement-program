#ifndef STUDENTMANAGEMENT_H
#define STUDENTMANAGEMENT_H

#include "../Student/Student.h"
#include "../Student/UniStudent.h"
#include "../Student/CollegeStudent.h"
#include <string>
#include <iostream>
#include <string>
#include <iomanip>

class ManageStudent
{
protected:
    Student *student_list_;
    int size;
    int cap = 10;

public:
    virtual void addStudent(
        std::string name,
        std::string day_of_birth,
        std::string school_name,
        std::string course_name) = 0;
    void show();
    void bestStudent();
    // Student* getStudent(int id);
    // bool deleteStudent(Student* student)=0;
};



#endif // !STUDENTMANAGEMENT_H