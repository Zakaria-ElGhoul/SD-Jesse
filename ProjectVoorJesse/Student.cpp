#include "Student.h"
#include "Course.h"

Student::Student(std::string aName, std::string aLastName, std::string aBirthDate, std::string anAdress, std::string aPostalCode, std::string aPhoneNumber, int aYear, std::string aRegistrationDate, std::string aFirstContactName, std::string aFirstContactLastName, std::string  aFirstContactNumber)
{
	name = aName;
	lastName = aLastName;
	birthDate = aBirthDate;
	adress = anAdress;
	postalCode = aPostalCode;
	phoneNumber = aPhoneNumber;
	year = aYear;
	registrationDate = aRegistrationDate;
	firstContactName = aFirstContactName;
	firstContactLastName = aFirstContactLastName;
	firstContactnumber = aFirstContactNumber;
}

Student::~Student()
{
}

void Student::SetName(std::string aName)
{
	name = aName;
}

void Student::SetLastName(std::string aLastName)
{
	lastName = aLastName;
}

void Student::SetDateOfBirth(std::string aBirthDate)
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

void Student::SetPhoneNumber(std::string aPhoneNumber)
{
	phoneNumber = aPhoneNumber;
}

void Student::SetYear(int aYear)
{
	year = aYear;
}

void Student::SetRegistrationDate(std::string aRegistrationDate)
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

void Student::SetFirstContactNumber(std::string aFirstContactNumber)
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

std::string Student::GetDateOfBirth()
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

std::string Student::GetPhoneNumber()
{
	return phoneNumber;
}

int Student::GetYear()
{
	return year;
}

std::string Student::GetRegistrationDate()
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

std::string Student::GetFirstContactNumber()
{
	return firstContactnumber;
}
