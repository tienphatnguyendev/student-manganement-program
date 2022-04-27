#ifndef COLSTUDENTMANAGMENT_H
#define COLSTUDENTMANAGMENT_H

#include "StudentManagement.h"
#include "../Student/Student.h"
#include "../Student/CollegeStudent.h"
#include <iostream>
class ColStudentManagement : public StudentManagement
{
public:
    ColStudentManagement();
    ~ColStudentManagement();
    void addStudent(
        std::string name,
        std::string day_of_birth,
        std::string school_name,
        std::string course_name);
};

#endif // !COLSTUDENTMANAGMENT_H