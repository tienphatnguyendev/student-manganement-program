#include "../../include/StudentManagement/UniStudentManagement.h"

ManageUniStudent::ManageUniStudent()
{
    this->student_list_ = new UniStudent[this->cap];
    this->size = 0;
}

ManageUniStudent::~ManageUniStudent()
{
    delete[] this->student_list_;
}

void ManageUniStudent::addStudent(
    std::string name,
    std::string day_of_birth,
    std::string school_name,
    std::string course_name)
{
    this->student_list_[this->size] = UniStudent(
        name,
        day_of_birth,
        school_name,
        course_name);
}