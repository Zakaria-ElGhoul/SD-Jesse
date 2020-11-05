#pragma once
#include <string>
#include <vector>
#include "Student.h"

class Course
{
public:
	Course();
	~Course();
protected:

private:

	std::string name;
	std::string DOE;
	int amountOfStudents;
	std::vector<Student*> student;
};

