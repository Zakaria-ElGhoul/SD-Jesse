#include <iostream>
#include "School.h"

int main()
{
	School myschool("Mediacollege");
	std::cout << myschool.GetName();
	std::cout << myschool.GetAmountOfCourse();
	return 0;
}