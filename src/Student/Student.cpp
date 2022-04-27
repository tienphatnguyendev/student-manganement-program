#include "../../include/Student/Student.h"

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

void Student::setId(int id)
{
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

void Student::setAssignmentScore(float *score)
{
    for (int i = 0; i < this->n_assignment_; ++i)
    {
        this->score_[this->ASSIGNMENT_IDX][i] = score[i];
    }
}

void Student::setTestScore(float *score)
{
    for (int i = 0; i < this->n_test_; ++i)
    {
        this->score_[this->TEST_IDX][i] = score[i];
    }
}

void Student::setExamScore(float *score)
{
    for (int i = 0; i < this->n_exam_; ++i)
    {
        this->score_[this->EXAM_IDX][i] = score[i];
    }
}

float Student::getScore()
{
    float sum = 0.00;
    for(int i = 0; i < this->n_assignment_; ++i) {
        sum += this->score_[this->ASSIGNMENT_IDX][i];
    }
    cout << setw(15) << left;
    for(int i = 0; i < this->n_exam_; ++i) {
        sum += this->score_[this->EXAM_IDX][i];
    }
    cout << setw(15) << left;
    for(int i = 0; i < this->n_test_; ++i) {
        sum += this->score_[this->TEST_IDX][i];
    }
    cout << endl;
    return (sum / (this->n_assignment_+ this->n_exam_+ this->n_test_));
}

int Student::getId()
{
    return this->id_;
}

void Student::printStudentInfo()
{
    cout << setw(25) << left << this->name_
         << setw(20) << left << this->day_of_birth_
         << setw(20) << left << this->school_name_
         << setw(25) << left << this->course_name_
         << setw(15) << left << this->n_semester_
         << setw(15) << left << this->n_assignment_
         << setw(10) << left << this->n_test_
         << setw(10) << left << this->n_exam_;
}
void Student::printScore() {
    cout << setw(25) << left << this->name_;
    cout << setw(18) << left;
    for(int i = 0; i < this->n_assignment_; ++i) {
        cout << this->score_[this->ASSIGNMENT_IDX][i] << " ";
    }
    cout << setw(15) << left;
    for(int i = 0; i < this->n_exam_; ++i) {
        cout << this->score_[this->EXAM_IDX][i] << " ";
    }
    cout << setw(15) << left;
    for(int i = 0; i < this->n_test_; ++i) {
        cout << this->score_[this->TEST_IDX][i] << " ";
    }
    cout << endl;
}

int Student::getNumberOfSemesters()
{
    return this->n_semester_;
}

int Student::getNumberOfAssignments()
{
    return this->n_assignment_;
}

int Student::getNumberOfTests()
{
    return this->n_test_;
}

int Student::getNumberOfExams()
{
    return this->n_exam_;
}
