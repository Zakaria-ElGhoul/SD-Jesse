#include <iostream>
#include <vector>
#include "Student.h"

int main()
{
    std::vector<Student> student;
    Student studentZaka("Zakaria", "El Ghoul", "19-11-2002", "TussenMeer 18", "1068GA", "0612345678", 1, "19-07-2018", "Famke", "Louise", "0647382912");
    Student studentWinjaris("Winjaris", "Windster", "23-1-1920", "1063AS", "0612345678", "", 1, "19-07-2018", "PlaceHolder", "PlaceHolder", "2");
    Student studentDean("Dean", "Hendriks", "2002", "1020", "1023FA", "0612345678",1 , "19-07-2018", "PlaceHolder", "PlaceHolder", "2");
    Student studentTomas("Tomas", "Berrens", "2002", "5960", "1032SD", "0612345678", 1 , "19-07-2018", "PlaceHolder", "PlaceHolder", "2");
    Student studentMilan("Milan", "Breuren", "420", "3431", "1065VD", "0612345678", 1 , "19-07-2018", "PlaceHolder", "PlaceHolder", "2");
    Student studentPeter("Peter", "R de Vries", "6969", "1094GD", "3", "0612345678", 1, "19-07-2018", "PlaceHolder", "PlaceHolder", "2");

    student.push_back(studentZaka);
    student.push_back(studentWinjaris);
    student.push_back(studentDean);
    student.push_back(studentTomas);
    student.push_back(studentMilan);
    student.push_back(studentPeter);

    for (int i = 0; i < student.size(); i++)
    {
        std::cout << student.at(i).name;
        std::cout << " ";
        std::cout << student.at(i).lastName;
        std::cout << " ";
        std::cout << student.at(i).birthDate;
        std::cout << " ";
        std::cout << student.at(i).adress;
        std::cout << " ";
        std::cout << student.at(i).postalCode;
        std::cout << " ";
        std::cout << student.at(i).phoneNumber;
        std::cout << " ";
        std::cout << student.at(i).year;
        std::cout << " ";
        std::cout << student.at(i).registrationDate;
        std::cout << " ";
        std::cout << student.at(i).firstContactName;
        std::cout << " ";
        std::cout << student.at(i).firstContactLastName;
        std::cout << " ";
        std::cout << student.at(i).firstContactnumber << std::endl;
    }
        std::cout << "Aantal Studenten: " << student.size() << std::endl;
}