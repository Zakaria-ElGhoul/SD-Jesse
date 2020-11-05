#include "Course.h"

Course::Course(std::string aName)
{
	Init();
}

Course::~Course()
{
}

void Course::AddSudent(Student* aStudent)
{
	students.push_back(aStudent);
}

std::vector<Student*> Course::GetStudents()
{
	return students;
}

void Course::Init()
{
	Student student1("Zakaria", "El Ghoul", "19-11-2002", "TussenMeer 18", "1068GA", "0612345678", 1, "19-07-2018", "Famke", "Louise", "0647382912");
	Student student2("Zakaria", "El Ghoul", "19-11-2002", "TussenMeer 18", "1068GA", "0612345678", 1, "19-07-2018", "Famke", "Louise", "0647382912");
	Student student3("Zakaria", "El Ghoul", "19-11-2002", "TussenMeer 18", "1068GA", "0612345678", 1, "19-07-2018", "Famke", "Louise", "0647382912");
	Student student4("Zakaria", "El Ghoul", "19-11-2002", "TussenMeer 18", "1068GA", "0612345678", 1, "19-07-2018", "Famke", "Louise", "0647382912");
	AddSudent(&student1);
	AddSudent(&student2);
	AddSudent(&student3);
	AddSudent(&student4);
}
