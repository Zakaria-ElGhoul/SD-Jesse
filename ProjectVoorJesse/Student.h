#pragma once

#include <string>

class Student
{
public:

	Student(std::string aName, std::string aLastName, std::string aBirthDate, std::string anAdress, std::string aPostalCode, std::string aPhoneNumber, int aYear, std::string aRegistrationDate, std::string aFirstContactName, std::string aFirstContactLastName, std::string  aFirstContactNumber);
	~Student();

	void SetName(std::string aName);
	void SetLastName(std::string aLastName);
	void SetDateOfBirth(std::string aBirthDate);
	void SetAdress(std::string anAdress);
	void SetPostalCode(std::string aPostalCode);
	void SetPhoneNumber(std::string aPhoneNumber);
	void SetYear(int aYear);
	void SetRegistrationDate(std::string aRegistrationDate);
	void SetFirstContactName(std::string aFirstContactName);
	void SetFirstContactLastName(std::string aFirstContactLastName);
	void SetFirstContactNumber(std::string aFirstContactNumber);

	std::string GetName();
	std::string GetLastName();
	std::string GetDateOfBirth();
	std::string GetAdress();
	std::string GetPostalCode();
	std::string GetPhoneNumber();
	int GetYear();
	std::string GetRegistrationDate();
	std::string GetFirstContactName();
	std::string GetFirstContactLastName();
	std::string GetFirstContactNumber();

private:

	std::string name;
	std::string lastName;
	std::string birthDate;
	std::string adress;
	std::string postalCode;
	std::string phoneNumber;
	int year;
	std::string registrationDate;
	std::string firstContactName;
	std::string firstContactLastName;
	std::string firstContactnumber;

protected:
};
