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
int Task::getUser_id(){
	return user_id;
}
void Task::setID(int n){
	this -> id = n;
}
void Task::setUser_id(int n){
	this -> user_id = n;
}
void Task::setName(string n){
	this -> name = n;
}
