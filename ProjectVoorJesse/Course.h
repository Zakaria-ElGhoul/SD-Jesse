#pragma once
#include <string>
#include <vector>
#include "Student.h"

class Course
{
public:

	std::vector < Student* > students;
	std::vector<Student*>* GetStudents();

	Course(std::string name);
	~Course();

	void AddStudent(Student* student);
	void RemoveStudent(Student* student);

	std::string GetName();
	int GetAge();
	int GetStudentCounter();

	void SetName(std::string name);
	void SetAge(int age);

private:
	std::string name;
	int age;
	int studentCount;

protected:
};

