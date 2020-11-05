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

int School::GetAmountOfCourse()
{
	return courses.size();
}

std::vector<Course*> School::GetCourse()
{
	return courses;
}

void School::Init()
{
	Course course1("Game Development");
	Course course2("Maths");
	AddCourse(&course1);
	AddCourse(&course2);
}
