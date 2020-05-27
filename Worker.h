#pragma once
#include<iostream>
using namespace std;

enum WorkerType
{
	NONE,
	DIRECTOR,
	ADMIN,
	PROGRAMMER,
	DESIGNER
};
class Worker
{
	char name[50];
	int startYear;
	double salary;
	WorkerType type;
	
	double check_salary(double salary)const;
	int check_startYear(int startYear)const;
	

public:
	Worker();
	Worker(const char* name, int startYear, int salary, WorkerType type);
	void PrintShortInfo();
	void PrintFullInfo();
	const char* Get_Position(WorkerType type);
	const char* Get_name()const;
	double Get_salary()const;
	int GetstartYear()const;
	WorkerType Get_WorkerType()const;
	void Set_name(const char* name);
	void Set_salary(double salary);
	void SetstartYear(int startYear);
	void Set_WorkerType(WorkerType type);
	
};

