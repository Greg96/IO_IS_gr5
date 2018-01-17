#pragma once
#include <string>
namespace Tasks{
	using namespace std;
	class Task
	{
	public:
		Task();
		~Task();
		int getID();
		string getName();
		int getUser_id();
		void setID(int);
		void setName(string);
		void setUser_id(int);
	private:
		int id, user_id;
		string name, description;
		double created, updated;
	
	
	};


}