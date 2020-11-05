#include "School.h"

School::School()
{
}

School::~School()
{
}

void School::AddCourse(Course* aCourse)
{
	courses.push_back(aCourse);
}

void School::RemoveCourse(Course* aCourse)
{
	courses.pop_back();
}

int School::GetAmountOfCourse()
{
	return courses.size();
}

std::vector<Course*> School::GetCourse()
{
	return courses;
}
