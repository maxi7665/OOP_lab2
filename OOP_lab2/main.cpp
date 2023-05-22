#include <string>
#include <iostream>
#include <Windows.h>
#include "Student.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "ËÐ ¹2 ÂÀÐÈÀÍÒ 2" << endl << endl;

	Student* student1 = new Student();

	student1->setName("Ivan");
	student1->setSurname("Petrov");
	student1->setYear(2022);

	Student* student2 = new Student(*student1);

	student2->setName("Ivan2");
	student2->setYear(student1->getYear() - 1);

	Student* student3 = new Student(
		student2->getName(), 
		"Ivanov", 
		student2->getYear() - 1);

	Student** students = new Student*[3];

	students[0] = student1;
	students[1] = student2;
	students[2] = student3;

	for (int i = 0; i < 3; i ++)
	{
		cout << (i + 1) << ". Ñòóäåíò " << students[i]->getFullName() 
			<<  ", êóðñ " << students[i]->getCourse() << endl; 
	}

	delete student1;
	delete student2;
	delete student3;
	delete[] students;

	return 0;
}