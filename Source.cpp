#include<iostream>
#include "Worker.h"
#include "Department.h"
using namespace std;

int main()
{
	Worker one("vasa",2009,990, ADMIN);
	Worker tue("vlad", 2001, 9990, PROGRAMMER);

	one.PrintFullInfo();
	Department fleacks;
	fleacks.Add_worker(one);
	cout << endl;
	fleacks.Add_worker(tue);
	fleacks.PrintByName("vasa");
	cout << endl;
	fleacks.ShowWorkers();
	cout << endl;
	cout<< fleacks.GetAverageSalary();
	cout << endl;
	fleacks.PrintByType(PROGRAMMER);
	cout << endl;
	fleacks.PrintByExperience(10);

	system("pause");
	return 0;
}