#include "User.h"
#include "Statistics.h"
using namespace Tasks;
void main() {
	User *user = new User("Ashu", "1234", "Matesz", "Nogiec","mojemail");
	TaskManagement* niewiem = new TaskManagement(*user);
	niewiem->addTask();

	Task *task1 = new Task;
	Statistics *stat = new Statistics;
	stat->getTask(task1);
	//---------------
	int num=10;
	Task* taskList = new Task[num];
	stat->generateData(taskList, num);
	stat->menu(taskList, num);
	system("pause");
}