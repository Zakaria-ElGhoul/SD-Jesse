#pragma once
#include <Vector>
#include <iostream>
#include "Course.h"

class School
{
public:
    School(std::string aName, std::string aPostcode, int aPhoneNumber);
    ~School();
    void AddStudent(Student* student, Course* course);
    void RemoveStudent(Student* student);

    void NextYear();

    void AddCourse(Course* aCourse);
    void RemoveCourse(Course* aCourse);


    int GetAmountOfCourse();
    void Init();

    std::vector<Course*> GetCourses();

#pragma region Getters en Setters


    int GetAge();
    std::string GetName();
    std::string GetPostcode();
    int GetPhoneNumber();
    int GetStudentCount();

    void SetName(std:: string aName);
    void SetAge(int anAge);
    void SetPostcode(std::string aPostcode);
    void SetPhoneNumber(int aNumber);
#pragma endregion

private:
    std::vector<Course*> courses;
    int anAge;
    std::string postcode;
    int phoneNumber;
    int studentCount;
    std::string name;

protected:

};
