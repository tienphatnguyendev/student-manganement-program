#include "../../include/StudentManagement/ColStudentManagement.h"

ColStudentManagement::ColStudentManagement()
{
    this->student_list_ = new Student *[this->cap];
    for(int i = 0; i < this->cap; ++i) {
        student_list_[i] = new CollegeStudent();
    }
    this->size = 0;
}

ColStudentManagement::~ColStudentManagement()
{
    delete[] this->student_list_;
}

void ColStudentManagement::addStudent(
    std::string name,
    std::string day_of_birth,
    std::string school_name,
    std::string course_name)
{
    this->student_list_[this->size]->setName(name);
    this->student_list_[this->size]->setDayOfBirth(day_of_birth);
    this->student_list_[this->size]->setSchoolName(school_name);
    this->student_list_[this->size]->setCourseName(course_name);

    this->size += 1;
}
