#include "../../include/StudentManagement/UniStudentManagement.h"

UniStudentManagment::UniStudentManagment()
{
    this->student_list_ = new Student *[this->cap];
    for (int i = 0; i < this->cap; ++i)
    {
        student_list_[i] = new UniStudent();
    }
    this->size = 0;
}

UniStudentManagment::~UniStudentManagment()
{
    delete[] this->student_list_;
}

void UniStudentManagment::addStudent(
    std::string name,
    std::string day_of_birth,
    std::string school_name,
    std::string course_name
) {
    this->student_list_[this->size]->setName(name);
    this->student_list_[this->size]->setDayOfBirth(day_of_birth);
    this->student_list_[this->size]->setSchoolName(school_name);
    this->student_list_[this->size]->setCourseName(course_name);

    this->size += 1;
}