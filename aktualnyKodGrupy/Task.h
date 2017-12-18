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

	private:
		int id, user_id;
		string name, description;
		double created, updated;
	
	
	};


}