#include "School.h"

School::School(std:: string aName)
{
	name = aName;
}

School::~School()
{
}

void School::AddCourse(Course* aCourse)
{
	courses.push_back(aCourse);
}

int School::GetAmountOfCourse()
{
	return courses.size();
}

std::vector<Course*> School::GetCourses()
{
	return courses;
}

std::string School::GetName()
{
	return name;
}

void School::SetName(std::string aName)
{
	name = aName;
}

void School::Init()
{
	courses.push_back(new Course("Media Development"));
	courses.push_back(new Course("Game Development"));
	courses.push_back(new Course("Wiskunde"));
}
