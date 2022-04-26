#ifndef UNISTUDENTMANAGEMENT_H
#define UNISTUDENTMANAGEMENT_H

#include "StudentManagement.h"
#include "../Student/Student.h"
#include "../Student/UniStudent.h"
#include <iostream>
class ManageUniStudent : public ManageStudent
{
public:
    ManageUniStudent();
    ~ManageUniStudent();
    void addStudent(
        std::string name,
        std::string day_of_birth,
        std::string school_name,
        std::string course_name);
};

#endif // !UNISTUDENT_MANAGEMENT_H