#include "../../include/StudentManagement/ColStudentManagement.h"

ManageColStudent::ManageColStudent()
{
    this->student_list_ = new CollegeStudent[this->cap];
    this->size = 0;
}

ManageColStudent::~ManageColStudent()
{
    delete[] this->student_list_;
}

void ManageColStudent::addStudent(
    std::string name,
    std::string day_of_birth,
    std::string school_name,
    std::string course_name)
{
    this->student_list_[this->size] = CollegeStudent(
        name,
        day_of_birth,
        school_name,
        course_name);
}
