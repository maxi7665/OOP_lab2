#include <string>

using namespace std;

class Student
{
private:

	string name;
	string surname;
	int year;

public:

	Student();
	Student(string name, string surname, int year);
	Student(const Student &student);	
	~Student();

	string getName();
	string getSurname();
	int getYear();

	void setName(string name);
	void setSurname(string surname);
	void setYear(int year);

	string getFullName();
	int getCourse();
};