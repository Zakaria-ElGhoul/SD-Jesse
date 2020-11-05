#include <iostream>
#include "School.h"

int main()
{
	std::cout << "Hello World" << std::endl;
	std::cout << "Hello";
	School myschool;
	myschool.GetCourse().at(0)->GetStudents().at(0)->GetName();
	return 0;
}