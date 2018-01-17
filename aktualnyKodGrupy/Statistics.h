#pragma once
#include "TaskManagement.h"
#include <iostream>
#include <string>
using namespace std;

class Statistics
{
public:
	void getTask(Tasks::Task* t);
	void generateData(Tasks::Task* list,int num);
	void wszystkieZadania(Tasks::Task* list, int num);
	void zadaniaJednegoUsera(Tasks::Task* list, int num);
	void menu(Tasks::Task* list, int num);
	Statistics(void);
	~Statistics(void);
};

