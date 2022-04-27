#include "../../include/StudentManagement/StudentManagement.h"

void StudentManagement::showStudents()
{

    if (this->size > 0)
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
        for (int i = 0; i < this->size; ++i)
        {
            this->student_list_[i]->printStudentInfo();
        }
    }
    else
    {
        cout << "There are no student's record";
    }
}

void StudentManagement::showScores()
{
    cout << setw(25) << left << "Name"
         << setw(18) << left << "Assignment"
         << setw(15) << left << "Exam"
         << setw(15) << "Test" << endl;
    for (int i = 0; i < this->size; ++i)
    {
        this->student_list_[i]->printScore();
    }
}

void StudentManagement::bestStudent()
{
    int max = 0;
    for (int i = 0; i < this->size; ++i)
    {
        if (max < this->student_list_[i]->getScore())
        {
            max = this->student_list_[i]->getScore();
        }
    }
    for (int i = 0; i < this->size; ++i)
    {
        if (this->student_list_[i]->getScore() == max)
        {
            this->student_list_[i]->printStudentInfo();
        }
    }
}

bool StudentManagement::deleteStudent(string name)
{
    bool found = false;
    int idx = -1;
    if (this->size > 1)
    {
        for (int i = 0; i < this->size; ++i)
        {
            if ((this->student_list_[i]->getName()).compare(name) == 0)
            {
                found = true;
                idx = i;
            }
        }

        if (found)
        {
            for (int i = idx; i < this->size; ++i)
            {
                this->student_list_[i] = this->student_list_[i + 1];
            }
            this->size -= 1;
            return true;
        }
        else
        {
            cout << "There are no student you want to  delete"
                 << "\'" << name << "\'" << endl;
        }
    }
    else
    {
        cout << "There are no student record in your organiztion\n";
    }
    return false;
}

// void StudentManagement::inputScore(string name, float score)
// {
//     for (int i = 0; i < this->size; ++i)
//     {
//         if (this->student_list_[i]->getName().compare(name) == 0)
//         {
//             this->student_list_[i]->setScore(score);
//             break;
//         }
//     }
// }

void StudentManagement::takeExams()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(0, 10);
    for (int i = 0; i < this->size; ++i)
    {
        float *score_random = new float[this->student_list_[i]->getNumberOfExams()];
        for (int i = 0; i < this->student_list_[i]->getNumberOfExams(); ++i)
        {
            score_random[i] = (float)distr(gen);
            cout << "sc" << i << ": " << score_random[i] << endl;
        }
        this->student_list_[i]->setAssignmentScore(score_random);
        cout << "Score: " << endl;
        this->student_list_[i]->printScore();
    }

}
void StudentManagement::takeTests()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(0, 10);
    for (int i = 0; i < this->size; ++i)
    {
        float *score_random = new float[this->student_list_[i]->getNumberOfTests()];
        for (int i = 0; i < this->student_list_[i]->getNumberOfTests(); ++i)
        {
            score_random[i] = (float)distr(gen);
        }
        this->student_list_[i]->setTestScore(score_random);
    }
}

void StudentManagement::doAssignments()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(0, 10);
    for (int i = 0; i < this->size; ++i)
    {
        float *score_random = new float[this->student_list_[i]->getNumberOfAssignments()];
        for (int i = 0; i < this->student_list_[i]->getNumberOfAssignments(); ++i)
        {
            score_random[i] = (float)distr(gen);
        }
        this->student_list_[i]->setAssignmentScore(score_random);
    }
}