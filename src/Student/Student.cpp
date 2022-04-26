#include "../../include/Student/Student.h"
#include <iostream>
#include <iomanip>
#include <string>

void Student::setName(std::string name)
{
    this->name_ = name;
}

void Student::setDayOfBirth(std::string day_of_birth)
{
    this->day_of_birth_ = day_of_birth;
}

void Student::setSchoolName(std::string school_name)
{
    this->school_name_ = school_name;
}

void Student::setCourseName(std::string course_name)
{
    this->course_name_ = course_name;
}

void Student::setScore(float score)
{
    this->score_ = score;
}

void Student::setId(int id) {
    this->id_ = id;
}

std::string Student::getName()
{
    return this->name_;
}

std::string Student::getDayOfBirth()
{
    return this->day_of_birth_;
}

std::string Student::getSchoolName()
{
    return this->school_name_;
}

std::string Student::getCourseName()
{
    return this->course_name_;
}

float Student::getScore()
{
    return this->score_;
}

int Student::getId() {
    return this->id_;
}