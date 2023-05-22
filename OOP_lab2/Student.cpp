#include <ctime>
#include <string>
#include <iostream>
#include "Student.h"

Student::Student()
{

}

Student::Student(string name, string surname, int year)
{
	this->name = name;
	this->surname = surname;
	this->year = year; 
}

Student::Student(const Student &student)
{
	this->name = student.name;
	this->surname = student.surname;
	this->year = student.year; 
}

Student::~Student()
{
	std::cout << name << " " << surname << " "  << year 
		<< " destructor working" << std::endl;
}

string Student::getName()
{
	return this->name;
}

string Student::getSurname()
{
	return this->surname;
}

int Student::getYear()
{
	return this->year;
}

void Student::setName(string name)
{
	this->name = name;
}

void Student::setSurname(string surname)
{
	this->surname = surname;
}

void Student::setYear(int year)
{
	this->year = year;
}

int Student::getCourse()
{
	time_t t = time(nullptr);
	tm* now = new tm;
	
	localtime_s(now, &t);

	int currentYear = now->tm_year + 1900;

	if (currentYear >= this->year)
	{
		return currentYear - this->year;
	}
	else
	{
		return 0;
	}
}

string Student::getFullName()
{
	return this->name + " " + this->surname;
}