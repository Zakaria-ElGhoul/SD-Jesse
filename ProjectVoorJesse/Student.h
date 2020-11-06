#pragma once
#include "Date.h"
#include <string>

class Student
{
public:

	Student(std::string aName, std::string aLastName, Date aBirthDate, std::string anAdress, std::string aPostalCode, int aPhoneNumber, int aYear, Date aRegistrationDate, std::string aFirstContactName, std::string aFirstContactLastName, int aFirstContactNumber);
	~Student();
#pragma region Getters en setters


	std::string GetName();
	std::string GetLastName();
	Date GetDateOfBirth();
	std::string GetAdress();
	std::string GetPostalCode();
	int GetPhoneNumber();
	int GetYear();
	Date GetRegistrationDate();
	std::string GetFirstContactName();
	std::string GetFirstContactLastName();
	int GetFirstContactNumber();

	void SetName(std::string aName);
	void SetLastName(std::string aLastName);
	void SetDateOfBirth(Date aBirthDate);
	void SetAdress(std::string anAdress);
	void SetPostalCode(std::string aPostalCode);
	void SetPhoneNumber(int aPhoneNumber);
	void SetYear(int aYear);
	void SetRegistrationDate(Date aRegistrationDate);
	void SetFirstContactName(std::string aFirstContactName);
	void SetFirstContactLastName(std::string aFirstContactLastName);
	void SetFirstContactNumber(int aFirstContactNumber);
#pragma endregion

	void NextYear();
	bool FinishedSchool();

private:

	std::string name;
	std::string lastName;
	Date birthDate;
	std::string adress;
	std::string postalCode;
	int phoneNumber;
	int year;
	Date registrationDate;
	std::string firstContactName;
	std::string firstContactLastName;
	int firstContactnumber;

protected:
};
