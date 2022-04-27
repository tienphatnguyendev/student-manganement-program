#ifndef STUDENTMANAGEMENT_H
#define STUDENTMANAGEMENT_H

#include "../Student/Student.h"
#include "../Student/UniStudent.h"
#include "../Student/CollegeStudent.h"
#include <string>
#include <iostream>
#include <string>
#include <iomanip>
#include <random>
class StudentManagement
{
protected:
    Student **student_list_;
    int size;
    int cap = 100;

public:
    virtual void addStudent(
        std::string name,
        std::string day_of_birth,
        std::string school_name,
        std::string course_name) = 0;
    void showStudents();
    void showScores();
    void bestStudent();
    // void inputScore(string name, float score);
    // Student* getStudent(int id);
    bool deleteStudent(string name);
    void takeExams();
    void takeTests();
    void doAssignments();
};

#endif // !STUDENTMANAGEMENT_H