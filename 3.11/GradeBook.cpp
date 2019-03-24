#include <iostream>
#include "GradeBook.h"
#include<string>

using namespace std;


GradeBook::GradeBook(string name1,string name2)
{
    setCourseName(name1);
    setTeacherName(name2);
}

void GradeBook::setCourseName(string name1)
{
    courseName=name1;
}
void GradeBook::setTeacherName(string name2)
{
    teacherName=name2;
}
string GradeBook::getCourseName()
{
    return courseName;
}
string GradeBook::getTeacherName()
{
    return teacherName;
}
void GradeBook::displayMessage()
{
    cout<<"Welcome to the grade book for\n"<<getCourseName()<<endl;
    cout<<"This course is presented by"<<getTeacherName()<<endl;
}
