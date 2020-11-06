#include <iostream>

#include "Student.h"
#include "Course.h"

Student::Student(std::string aName, std::string aLastName, Date aBirthDate, std::string anAdress, std::string aPostalCode, int aPhoneNumber, int aYear, Date aRegistrationDate, std::string aFirstContactName, std::string aFirstContactLastName, int aFirstContactNumber)
{
	name = aName;
	lastName = aLastName;
	birthDate = aBirthDate;
	adress = anAdress;
	postalCode = aPostalCode;
	phoneNumber = aPhoneNumber;
	year = 0;
	registrationDate = aRegistrationDate;
	firstContactName = aFirstContactName;
	firstContactLastName = aFirstContactLastName;
	firstContactnumber = aFirstContactNumber;

	std::cout << "New student was created" << std:: endl;
}

Student::~Student()
{
	std::cout << "Student deleted student Name: " << name << std::endl;
}

void Student::NextYear() 
{
	year += 1;
}

bool Student::FinishedSchool() 
{
	return (year > 4);
}
#pragma region Getters en Setters


void Student::SetName(std::string aName)
{
	name = aName;
}

void Student::SetLastName(std::string aLastName)
{
	lastName = aLastName;
}

void Student::SetDateOfBirth(Date aBirthDate)
{
	birthDate = aBirthDate;
}

void Student::SetAdress(std::string anAdress)
{
	adress = anAdress;
}

void Student::SetPostalCode(std::string aPostalCode)
{
	postalCode = aPostalCode;
}

void Student::SetPhoneNumber(int aPhoneNumber)
{
	phoneNumber = aPhoneNumber;
}

void Student::SetYear(int aYear)
{
	year = aYear;
}

void Student::SetRegistrationDate(Date aRegistrationDate)
{
	registrationDate = aRegistrationDate;
}

void Student::SetFirstContactName(std::string aFirstContactName)
{
	firstContactName = aFirstContactName;
}

void Student::SetFirstContactLastName(std::string aFirstContactLastName)
{
	firstContactLastName = aFirstContactLastName;
}

void Student::SetFirstContactNumber(int aFirstContactNumber)
{
	firstContactnumber = aFirstContactNumber;
}


std::string Student::GetName()
{
	return name;
}

std::string Student::GetLastName()
{
	return lastName;
}

 Date Student::GetDateOfBirth()
{
	return birthDate;
}

std::string Student::GetAdress()
{
	return adress;
}

std::string Student::GetPostalCode()
{
	return postalCode;
}

int Student::GetPhoneNumber()
{
	return phoneNumber;
}

int Student::GetYear()
{
	return year;
}

Date Student::GetRegistrationDate()
{
	return registrationDate;
}

std::string Student::GetFirstContactName()
{
	return firstContactName;
}

std::string Student::GetFirstContactLastName()
{
	return firstContactLastName;
}

int Student::GetFirstContactNumber()
{
	return firstContactnumber;
}

#pragma endregion