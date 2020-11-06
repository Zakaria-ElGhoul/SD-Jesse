#pragma once
#include <Vector>
#include "Course.h"

class School
{
public:
    School(std::string aName);
    ~School();

    void AddCourse(Course* aCourse);

    int GetAmountOfCourse();

    std::vector<Course*> GetCourses();

    std::string GetName();
    void SetName(std:: string aName);

private:
    std::vector<Course*> courses;
    void Init();

    std::string name;

protected:

};
