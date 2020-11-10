#include <iostream>
#include <chrono>
#include <thread>
#include <ctime>;
#include "School.h";
#include "Course.h";
#include "Student.h";

void clearConsole() {
	system("cls");
}

int main()
{
	School* school = new School("MediaCollege", "2376 GT", 112);

	Course* course1 = new Course("Game development");
	Course* course2 = new Course("Media development");
	Course* course3 = new Course("WVO");
	Course* course4 = new Course("Game Theory");

	school->AddCourse(course1);
	school->AddCourse(course2);
	school->AddCourse(course3);
	school->AddCourse(course4);

	Date birthDateZaka(19, 11, 2002);
	Date birthDateDean(8, 07, 2002);
	Date birthDateWinnie(4, 01, 2003);
	Date birthDateKrishna(28, 10, 2003);
	Date birthDateThomas(12, 01, 2002);
	Date birthDateMilan(22, 04, 1998);
	Date birthDateDivyun(2, 10, 2002);
	Date birthDateMoesie(23, 11, 2003);
	Date birthDateSameer(12, 04, 2005);
	Date birthDateYassine(1, 05, 2002);
	Date birthDateHammy(27, 06, 2001);

	Date currentDate(6, 11, 2020);
	
	Student* studentZaka = new Student("Zakaria", "Elghoul", birthDateZaka, "Tussenmeer", "1067 GA", 616490788, 2, currentDate, "Marshall", "Mathers", 1129383478);
	Student* studentDean = new Student("Dean", "Hendriks", birthDateDean, "Jupiterlaan", "1293 AT", 213213212, 2, currentDate, "T", "Pain", 12312904);
	Student* studentWinnie  = new Student("Winjaris", "Windster", birthDateWinnie, "Albert Kuipstraat", "1063 GZ", 32187431, 2, currentDate, "Soap", "McTavish", 1348713498);
	Student* studentKrishna = new Student("Krishna", "Rana", birthDateKrishna, "Lelylaan", "1068 TF", 34312789, 3, currentDate, "Peter", "R de Vries", 134897623);
	Student* studentThomas = new Student("Thomas", "Berrens", birthDateThomas, "Dam", "1058 DS", 129478921, 4, currentDate, "Big", "Daddy", 423234391);
	Student* studentMilan = new Student("Milan", "Breuren", birthDateMilan, "Osdorpplein", "2034 OM", 42069420, 1, currentDate, "Felix", "Kjellberg", 897423987);
	Student* studentDivyun = new Student("Divyun", "Choudhari", birthDateDivyun, "Stilte", "3221 OG", 78641387, 2, currentDate, "Peter", "Hawelis", 2347890423);
	Student* studentMoesie = new Student("Mustafa", "Massoudi", birthDateMoesie, "Bos en Lommer plein", "1066 DG", 43298134, 3, currentDate, "Tony", "Hawk", 8976251678);
	Student* studentSameer = new Student("Sameer", "Bagheloe", birthDateSameer, "Wibautstraat", "1158 TZ", 419041343, 1, currentDate, "Paul", "Peralta", 2341721345);
	Student* studentHammy = new Student("Hamnah", "Butt", birthDateHammy, "P.L. Takstraat", "2132 TZ", 42069420, 2, currentDate, "Peter", "R de vries", 2341721345);

	school->AddStudent(studentZaka, course1);
	school->AddStudent(studentDean, course1);
	school->AddStudent(studentWinnie, course1);
	school->AddStudent(studentKrishna, course2);
	school->AddStudent(studentThomas, course2);
	school->AddStudent(studentMilan, course2);
	school->AddStudent(studentDivyun, course3);
	school->AddStudent(studentMoesie, course2);
	school->AddStudent(studentSameer, course4);
	school->AddStudent(studentHammy, course4);

	clearConsole();
	school->Init();
	clearConsole();

	std::string next;

	for (int i = 0; i < 10; i++) {
		school->NextYear();
		school->Init();
		std::cout << std::endl << std::endl << "Type to go to the next year!" << std::endl;

		std::cin >> next;
		clearConsole();
	}


	school->Init();
	return 0;
}