#include <string>

class GradeBook
{
public:
    explicit GradeBook(std::string,std::string);
    void setCourseName(std::string);
    void setTeacherName(std::string);
    std::string getCourseName() ;
    std::string getTeacherName();
    void displayMessage();
private:
    std::string courseName;
    std::string teacherName;
}; // GRADEBOOK_H_INCLUDED
