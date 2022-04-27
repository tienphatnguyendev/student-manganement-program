#include "../../include/Student/UniStudent.h"

UniStudent::UniStudent()
{
    this->n_semester_ = 8;
    this->n_assignment_ = 3;
    this->n_test_ = 2;
    this->n_exam_ = 1;

    this->score_ = new float *[4];

    this->score_[ASSIGNMENT_IDX] = new float[this->n_assignment_];
    for (int i = 0; i < n_assignment_; ++i)
    {
        this->score_[ASSIGNMENT_IDX][i] = -1;
    }

    this->score_[TEST_IDX] = new float[this->n_test_];
    for (int i = 0; i < n_test_; ++i)
    {
        this->score_[TEST_IDX][i] = -1;
    }

    this->score_[EXAM_IDX] = new float[this->n_exam_];
    for (int i = 0; i < n_exam_; ++i)
    {
        this->score_[EXAM_IDX][i] = -1;
    }
}

UniStudent::UniStudent(string name,
                       string day_of_birth,
                       string school_name,
                       string course_name)
{
    this->name_ = name;
    this->day_of_birth_ = day_of_birth;
    this->school_name_ = school_name;
    this->course_name_ = course_name;
    this->n_semester_ = 8;
    this->n_assignment_ = 3;
    this->n_test_ = 2;
    this->n_exam_ = 1;

    this->score_ = new float *[4];

    this->score_[ASSIGNMENT_IDX] = new float[this->n_assignment_];
    for (int i = 0; i < n_assignment_; ++i)
    {
        this->score_[ASSIGNMENT_IDX][i] = -1;
    }

    this->score_[TEST_IDX] = new float[this->n_test_];
    for (int i = 0; i < n_test_; ++i)
    {
        this->score_[TEST_IDX][i] = -1;
    }

    this->score_[EXAM_IDX] = new float[this->n_exam_];
    for (int i = 0; i < n_exam_; ++i)
    {
        this->score_[EXAM_IDX][i] = -1;
    }
}


