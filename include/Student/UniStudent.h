#ifndef UNI_STUDENT_H
#define UNI_STUDENT_H
#include "Student.h"
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;
class UniStudent : public Student
{
public:
    UniStudent();
    UniStudent(
        std::string name,
        std::string day_of_birth,
        std::string school_name,
        std::string course_name_);
};

#endif // !UNI_STUDENT_H