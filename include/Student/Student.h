#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class Student
{
protected:
    std::string name_;
    std::string day_of_birth_;
    std::string school_name_;
    std::string course_name_;
    int n_semester_;
    int n_assignment_;
    int n_test_;
    int n_exam_;
    float **score_;
    int id_;

public:
    const int ASSIGNMENT_IDX = 0,
              TEST_IDX = 1,
              EXAM_IDX = 2;
    void setName(std::string name);
    void setDayOfBirth(std::string day_of_birth);
    void setSchoolName(std::string school_name);
    void setCourseName(std::string course_name);
    void setId(int id);
    void printStudentInfo();
    void printScore();
    
    std::string getName();
    std::string getDayOfBirth();
    std::string getSchoolName();
    std::string getCourseName();
    void setAssignmentScore(float* score);
    void setTestScore(float* score);
    void setExamScore(float* score);
    float getScore();
    int getId();

    int getNumberOfSemesters();
    int getNumberOfAssignments();
    int getNumberOfTests();
    int getNumberOfExams();
};

#endif // !STUDENT_H