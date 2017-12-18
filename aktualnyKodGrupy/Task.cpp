#include "Task.h"

using namespace Tasks;

Task::Task()
{
	id=5;
	name="zadanie";
}


Task::~Task()
{

}

int Task::getID(){
	return id;
}
string Task::getName(){
	return name;
}
