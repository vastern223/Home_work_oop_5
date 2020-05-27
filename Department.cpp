#include "Department.h"

int Department::Size_check() const
{
	return (workerCount > 0);
}

Department::Department() :workers(nullptr), workerCount(0)
{
}
Department::Department(const Department& other)
{
	this->workerCount = other.workerCount;
	this->workers = new Worker[workerCount];
	for (int i = 0; i < workerCount; i++)
	{
		this->workers[i] = other.workers[i];
	}
}
void Department::Add_worker(const Worker& worker)
{
	Worker* _workers = new Worker[workerCount + 1];

	for (int i = 0; i < workerCount; i++)
	{
		_workers[i] = workers[i];
	}
	_workers[workerCount] = worker;
	delete[] workers;
	++workerCount;
	workers = _workers;
}

void Department::ShowWorkers()
{
	if (Size_check())
	{
		for (int i = 0; i < workerCount; i++)
		{
			workers[i].PrintFullInfo();
		}
	}
}

void Department:: PrintByName(const char* _name)const
{
	if (Size_check())
	{
		for (int i = 0; i < workerCount; i++)
		{
			if (strcmp(workers[i].Get_name(), _name) == 0)
			{
				workers[i].PrintFullInfo();
			}
			
		}
	}
}

double Department:: GetAverageSalary()const
{
	if (Size_check())
	{
		double salary = 0;
		for (int i = 0; i < workerCount; i++)
		{
			salary += workers[i].Get_salary();
		}
		return salary / double(workerCount);
	}
}

void Department:: PrintByType(const WorkerType type)const
{
	if (Size_check())
	{
		for (int i = 0; i < workerCount; i++)
		{
			if (workers[i].Get_WorkerType() == type)
			{
				workers[i].PrintFullInfo();
			}
		}
	}
}

void Department:: PrintByExperience(const int exp)
{
	if (Size_check())
	{
		SYSTEMTIME st;
		GetSystemTime(&st);
		for (int i = 0; i < workerCount; i++)
		{
			if (st.wYear - workers[i].GetstartYear() > exp)
			{
				workers[i].PrintFullInfo();
			}
		}
	}
}
Department:: ~Department()
{
	if (workers != nullptr)
		delete[] workers;
}