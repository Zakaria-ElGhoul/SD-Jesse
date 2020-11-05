#pragma once
#include <Vector>
#include <string>
#include "Course.h"

class School
{
public:
    School();
    ~School();

    void AddCourse(Course* aCourse);
    void RemoveCourse(Course* aCourse);
    int GetAmountOfCourse();
    std::vector<Course*> GetCourse();
    void Init();
private:
    std::vector<Course*> courses;
    

protected:
};
