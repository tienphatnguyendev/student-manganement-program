#include "../../include/Student/CollegeStudent.h"

CollegeStudent::CollegeStudent()
{
    this->n_semester_ = 4;
    this->n_assignment_ = 1;
    this->n_test_ = 1;
    this->n_exam_ = 1;
}

CollegeStudent::CollegeStudent(string name,
                               string day_of_birth,
                               string school_name,
                               string course_name_)
{
    this->name_ = name;
    this->day_of_birth_ = day_of_birth;
    this->school_name_ = school_name;
    this->course_name_ = course_name_;
}

int CollegeStudent::getNumberOfSemesters()
{
    return this->n_semester_;
}

int CollegeStudent::getNumberOfAssignments()
{
    return this->n_assignment_;
}

int CollegeStudent::getNumberOfTests()
{
    return this->n_test_;
}

int CollegeStudent::getNumberOfExams()
{
    return this->n_exam_;
}

void CollegeStudent::printStudentInfo()
{
    cout << setw(25) << left << "Name"
         << setw(20) << left << "Day Of Birth"
         << setw(20) << left << "School name"
         << setw(25) << left << "Course name"
         << setw(15) << left << "N_Semesters"
         << setw(15) << left << "N_Assignments"
         << setw(10) << left << "N_Tests"
         << setw(10) << left << "N_Exams"
         << endl;

    cout << setw(25) << left << this->name_
         << setw(20) << left << this->day_of_birth_
         << setw(20) << left << this->school_name_
         << setw(25) << left << this->course_name_
         << setw(15) << left << this->n_semester_
         << setw(15) << left << this->n_assignment_
         << setw(10) << left << this->n_test_
         << setw(10) << left << this->n_exam_
         << endl;
}