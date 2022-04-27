#ifndef COLLEGE_STUDENT_H
#define COLLEGE_STUDENT_H
#include "Student.h"
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

class CollegeStudent : public Student
{
public:
    CollegeStudent();
    CollegeStudent(
        std::string name,
        std::string day_of_birth,
        std::string school_name,
        std::string course_name_);
};

#endif // !COLLEGE_STUDENT_H
