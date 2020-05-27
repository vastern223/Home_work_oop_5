#pragma once
#include "Worker.h"
#include <windows.h>
class Department
{
	Worker* workers;
	int workerCount;
	int Size_check()const;
public:
	Department();
	Department(const Department& other);
	void Add_worker(const Worker& worker);
	void ShowWorkers();
	void PrintByName(const char* _name)const;
	double GetAverageSalary()const;
	void PrintByType(const WorkerType type)const;
	void PrintByExperience(const int exp);
		~Department();

};

