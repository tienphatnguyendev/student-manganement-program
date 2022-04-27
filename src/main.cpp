#include <iostream>
#include "../include/Student/Student.h"
#include "../include/Student/UniStudent.h"
#include "../include/Student/CollegeStudent.h"
#include "../include/StudentManagement/StudentManagement.h"
#include "../include/StudentManagement/UniStudentManagement.h"
#include "../include/StudentManagement/ColStudentManagement.h"
using namespace std;

const int START = -2,
          STOP = -1,
          ADD_STUDENT = 1,
          STUDENT_LIST = 2,
          BEST_STUDENT = 3,
          DELETE_STUDENT = 4,
          TAKE_EXAM = 5,
          TAKE_TEST = 6,
          DO_ASSIGNMENT = 7;

void programGuide();
void myApp();

int main()
{
    myApp();
    return 0;
}

void programGuide()
{
    cout << "\n-------------------------------------------------------------------------------------------------------\n";
    cout << "Student Management Program" << endl
         << "-1. Quit" << endl
         << "1. Add student and score" << endl
         << "2. Display list of all student" << endl
         << "3. Display the best student" << endl
         << "4. Delete student" << endl
         << "5. Take Exam" << endl
         << "6. Take Test" << endl
         << "7. Do Assignment" << endl
         << "\nYour choice: ";
}

void myApp()
{
    string name = "";
    string dob = "";
    string school_name = "";
    string course = "";

    int org = -1;
    cout << "What kind of your organization (1: University, 2: College): ";
    cin >> org;

    StudentManagement *school;

    if (org == 1)
    {
        school = new UniStudentManagment();
    }
    else if (org == 2)
    {
        school = new ColStudentManagement();
    }
    else
    {
        cout << "Your organization type will be updated soon";
        return;
    }

    int status = START;
    while (status != STOP)
    {
        int user_choice = 0;
        programGuide();
        cin >> user_choice;

        switch (user_choice)
        {
        case STOP:
            status = STOP;
            break;

        case ADD_STUDENT:
            cout << "You need to fill 4 fields:\n 'Name', 'Day of Birth', 'School', 'Course'  below: " << endl;
            cout << "Name: ";
            cin >> name;
            cout << "Day of Birth: ";
            cin >> dob;
            cout << "School: ";
            cin >> school_name;
            cout << "Course: ";
            cin >> course;
            school->addStudent(name, dob, school_name, course);
            break;

        case STUDENT_LIST:
            school->showStudents();
            break;

        case BEST_STUDENT:
            school->bestStudent();
            break;

        case DELETE_STUDENT:
            cout << "Name of removing student: ";
            cin >> name;
            school->deleteStudent(name);
            break;
        
        case TAKE_EXAM:
            school->takeExams();
            cout << "All students have just taken exams !!!\n";
            break;

        case TAKE_TEST:
            school->takeTests();
            cout << "All students have just taken tests !!!\n";
            break; 
        case DO_ASSIGNMENT:
            school->doAssignments();
            cout << "All students have just finished assignments !!!\n";
            break;
        default:
            cout << "\n ERROR: INVALID choice!\n\n";
            status = STOP;
            break;
        }
    }
}
