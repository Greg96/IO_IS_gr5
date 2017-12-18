#include "Statistics.h"

using namespace std;

void Statistics::getTask(Tasks::Task* t)
{
	cout << t->getID() << endl << t->getName()<<endl;
}

Statistics::Statistics(void)
{
}


Statistics::~Statistics(void)
{
}
