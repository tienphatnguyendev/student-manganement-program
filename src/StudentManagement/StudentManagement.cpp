#include "../../include/StudentManagement/StudentManagement.h"

void ManageStudent::show()
{
    for (int i = 0; i < this->size; ++i)
    {
        std::cout << std::setw(4) << std::left << this->student_list_[i].getId()
                  << std::setw(25) << std::left << this->student_list_[i].getName()
                  << std::setw(2) << std::left << this->student_list_[i].getScore()
                  << std::endl;
    }
}

void ManageStudent::bestStudent()
{
    int max = 0;
    for (int i = 0; i < this->size; ++i)
    {
        if (max < this->student_list_[i].getScore())
        {
            max = this->student_list_[i].getScore();
        }
    }

    for (int i = 0; i < this->size; ++i)
    {
        if (this->student_list_[i].getScore() == max)
        {
            std::cout << std::setw(4) << std::left << this->student_list_[i].getId()
                      << std::setw(25) << std::left << this->student_list_[i].getName()
                      << std::setw(2) << std::left << this->student_list_[i].getScore()
                      << std::endl;
        }
    }
}