#include "Worker.h"

Worker::Worker() : startYear(0), salary(0), type(NONE)
{
	strcpy_s(name, "No name");
}


Worker::Worker(const char* name, int startYear, int salary, WorkerType type)
{
	if (check_salary(salary) && check_salary(startYear))

	{
		strcpy_s(this->name, name);
		this->startYear = startYear;
		this->salary = salary;
		this->type = type;
	}
	else
	{
		this->startYear = 0;
		this->salary = 0;
		this->type = NONE;
		strcpy_s(this->name, "No name");
	}

}

double Worker::check_salary(double salary)const
{
	return (salary > 0);
}
int Worker::check_startYear(int startYear)const
{
	return (startYear > 0);
}

void Worker::PrintShortInfo()
{
	cout << "Name:" << name << endl;
	cout << "Salary:" << salary << endl;
}

const char* Worker::Get_Position(WorkerType type)
{
	if (type == NONE)return"None";
	else if (type == DIRECTOR)return"Director";
	else if (type == ADMIN)return"Admin";
	else if (type == PROGRAMMER)return"Programer";
	else if (type == DESIGNER)return"Designer";
}

void Worker::PrintFullInfo()
{

	cout << "Name :" << name << endl;
	cout << "Salary :" << salary << endl;
	cout << "Year of start of work :" << startYear << endl;
	cout << "Position :" << Get_Position(type) << endl;

}

const char* Worker::Get_name()const
{
	return name;
}

double Worker::Get_salary()const
{
	return salary;
}

int Worker::GetstartYear()const
{
	return startYear;
}
WorkerType Worker::Get_WorkerType()const
{
	return  type;
}
void Worker::Set_name(const char* name)
{
	strcpy_s(this->name, name);
}
void Worker::Set_salary(double salary)
{
	check_salary(salary);
	this->salary = salary;
}
void Worker::SetstartYear(int startYear)
{
	check_startYear(startYear);
	this->startYear = startYear;
}
void Worker::Set_WorkerType(WorkerType type)
{
	this->type = type;
}
