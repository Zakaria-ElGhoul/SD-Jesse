#include <iostream>;
#include <vector>;
#include "Course.h";

Course::Course(std::string name)
{
	name = name;
	std::cout << "Successfully made the course: " + name << std::endl;
}
Course::~Course()
{
	std::cout << "The name of the course that was deleted: " + name;
}



void Course::AddStudent(Student* student)
{
	students.push_back(student);
}

void Course::RemoveStudent(Student* student)
{
	for (int i = 0; i < students.size(); i++) {
		if (students[i] == student) {
			students.erase(students.begin() + i);
			i -= 1;
		}
	}
}

#pragma region Getters en setters


std::string Course::GetName() 
{
	return name; 
}

int Course::GetAge() 
{ 
	return age; 
}

int Course::GetStudentCounter() 
{
	return studentCount; 
}

std::vector<Student*>* Course::GetStudents() 
{
	return &students; 
}

void Course::SetName(std::string name) 
{
	this->name = name; 
}

void Course::SetAge(int age)
{
	age = age; 
}

#pragma endregion