#ifndef STUDENT_H
#define STUDENT_H
#include <string>
class Student
{
protected:
    std::string name_;
    std::string day_of_birth_;
    std::string school_name_;
    std::string course_name_;
    float score_;
    int id_;

public:
    void setName(std::string name);
    void setDayOfBirth(std::string day_of_birth);
    void setSchoolName(std::string school_name);
    void setCourseName(std::string course_name);
    void setScore(float score);
    void setId(int id);

    std::string getName();
    std::string getDayOfBirth();
    std::string getSchoolName();
    std::string getCourseName();
    float getScore();
    int getId();

    virtual int getNumberOfSemesters() = 0;
    virtual int getNumberOfAssignments() = 0;
    virtual int getNumberOfTests() = 0;
    virtual int getNumberOfExams() = 0;
    virtual void printStudentInfo() = 0;
};

#endif // !STUDENT_H