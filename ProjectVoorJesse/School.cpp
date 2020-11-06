#include <string>;
#include <iostream>;

#include "Student.h";
#include "School.h";
#include "Course.h";

School :: School(std::string aName, std::string aPostcode, int aPhoneNumber)
{
	name = aName;
	anAge = 0;
	postcode = aPostcode;
	phoneNumber = aPhoneNumber;
	studentCount = 0;
}

School::~School()
{
	std::cout << "Deleted the school :(";
}

void School::AddStudent(Student* student, Course* course)
{
	course->AddStudent(student);
	studentCount += 1;
	std::cout << "A new Student has joined!" <<std::endl;
}

void School::RemoveStudent(Student* student)
{
	std::cout << "A Student has left :(" << std::endl;
	for (int i = 0; i < GetCourses().size(); i++) 
	{
		for (int j = 0; j < GetCourses()[i]->GetStudents()->size(); j++) 
		{
			Student* otherStudent = GetCourses().at(i)->GetStudents()->at(j);

			if (otherStudent == student) 
			{
				GetCourses()[i]->GetStudents()->erase(GetCourses()[i]->GetStudents()->begin() + j);
				j -= 1;
				studentCount -= 1;
			}
		}
	}
	delete student;
}


void School::AddCourse( Course* aCourse)
{
	courses.push_back(aCourse);
	std::cout << "A course has been added to the school!" << std::endl;
}

void School::RemoveCourse(Course* aCourse)
{
	std::cout << "A course has been removed!";

	for (int i = 0; i < courses.size(); i++) {
		if (courses[i] == aCourse) {
			courses.erase(courses.begin() + i);
		}
	}
	delete aCourse;
}

void School::NextYear()
{
	anAge += 1;
	std::cout << "The next year has started" << std::endl;
	for (int i = 0; i < courses.size(); i++) 
	{
		for (int j = 0; j < courses.at(i)->GetStudents()->size(); j++)
		{
			courses[i]->GetStudents()->at(j)->NextYear();

			if (courses.at(i)->GetStudents()->at(j)->FinishedSchool())
			{
				RemoveStudent(courses.at(i)->GetStudents()->at(j));
				j -= 1;
			}
		}
	}
}

#pragma region Getters en Setters

int School::GetAmountOfCourse()
{
	return courses.size();
}

std::vector<Course*> School::GetCourses()
{
	return courses;
}

int School::GetAge()
{
	return 0;
}

std::string School::GetName()
{
	return name;
}

std::string School::GetPostcode()
{
	return postcode;
}

int School::GetStudentCount()
{
	return studentCount;
}

int School::GetPhoneNumber()
{
	return phoneNumber;
}

void School::SetName(std::string aName)
{
	name = aName;
}

void School::SetAge(int age)
{
	anAge = age;
}

void School::SetPostcode(std::string aPostcode)
{
	postcode = aPostcode;
}

void School::SetPhoneNumber(int aPhonenumber) 
{
	phoneNumber = aPhonenumber;
}

#pragma endregion

void School::Init()
{
	std::cout << "School Name: " << name << std::endl;
	std::cout << "School Age: " << anAge << std::endl;
	std::cout << "Postcode: " << postcode << std::endl;
	std::cout << "Phone Number: " << phoneNumber << std::endl;
	std::cout << "Courses: " << courses.size() << std::endl;
	std::cout << "Students: " << studentCount << std::endl;
}