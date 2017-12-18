#pragma once
#include "Task.h"
#include<vector>
#include<iostream>
#include "User.h"
namespace Tasks {
using namespace std;

class TaskManagement
{
private:
	vector<Task> taskList;
	User user;
public:
	void addTask();
	void deleteTask(int id);
	void updateTask(int id);
	void listTasks();


	TaskManagement();
	~TaskManagement();
	TaskManagement(User user);
};

}