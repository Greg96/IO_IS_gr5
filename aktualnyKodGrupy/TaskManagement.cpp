#include "TaskManagement.h"
using namespace Tasks;


void TaskManagement::addTask() {
	if (this->user.isLoggedIn()) {
		//this->taskList.push_back(task);
		cout << "Dodano zadanie 123\n";
	}
	else
		cout <<"nie dodano";
}
void TaskManagement::deleteTask(int id) {
	if (this->user.isLoggedIn()) {
		cout << "Usunieto zadanie od id: " << id << endl;;
	}
	else
		cout << "niezalogowany";
}

void TaskManagement::updateTask(int id) {
	if(this->user.isLoggedIn())
	cout << "Zmodyfikowano zadanie o id: " << id << endl;
	else
		cout << "niezalogowany";
}
void TaskManagement::listTasks() {
	if(this->user.isLoggedIn())
	cout << "Lista zadan: 123\n";
	else
		cout << "niezalogowany";
}

TaskManagement::TaskManagement()
{

}


TaskManagement::TaskManagement(User user)
{
	this->user = user;
}


TaskManagement::~TaskManagement()
{
}
