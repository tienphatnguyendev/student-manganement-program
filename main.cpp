#include <iostream>
#include "./include/Student/UniStudent.h"
#include "./include/Student/CollegeStudent.h"
#include "./include/Student/Student.h"
#include "./include/ManageStudent/ManageUniStudent.h"
#include "./include/ManageStudent/ManageStudent.h"
#include "./include/ManageStudent/ManageColStudent.h"
using namespace std;

int main() {
    ManageUniStudent manage;
    manage.addStudent("Nguyen Tien Phat", "21092001", "HCMUT", "AP");
    manage.show();
    return 0;
}