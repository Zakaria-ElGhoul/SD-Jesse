#pragma once
#include <string>
#include <vector>
#include "Student.h"

class Course
{
public:
	Course(std::string aName);
	~Course();

	void AddSudent(Student* aStudent);
	std::vector<Student*> GetStudents();
	void Init();
protected:

private:
	std::string name;
	std::string DOE;

	int amountOfStudents;
	std::vector<Student*> students;
};

