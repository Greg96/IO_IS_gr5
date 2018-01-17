#include "Statistics.h"

using namespace std;

void Statistics::getTask(Tasks::Task* t)
{
	cout << t->getID() << endl << t->getName()<<endl;
}

void Statistics::generateData(Tasks::Task* list,int num)
{
	for(int i=0;i<num;i++)
	{
		list[i].setID(i);
		list[i].setName("abcdefghij"+i);
		list[i].setUser_id(i%3);
	}
}
void Statistics::wszystkieZadania(Tasks::Task* list,int num)
{
	for(int i = 0; i < num; i++)
	{
		cout<<"id usera: "<<list[i].getUser_id()<<endl;
		cout<<"id zadania: "<<list[i].getID()<<endl;
		cout<<"nazwa zadania: "<<list[i].getName()<<endl;
		cout<<endl;
	}
}
void Statistics::zadaniaJednegoUsera(Tasks::Task* list, int num)
{
	int a = 0;
	int uid;
	cout<<"podaj id usera"<<endl;
	cin >> uid;
	cout<<"zadania usera o id: "<<uid<<endl;
	for(int i = 0; i < num; i++)
	{
		if(uid == list[i].getUser_id())
		{
			cout<<"id zadania: "<<list[i].getID()<<endl;
			cout<<"nazwa zadania: "<<list[i].getName()<<endl;
			cout<<endl;
			a++;
		}
	}
	if (a == 0)
			cout<<"nie ma takiego usera"<<endl;
}
void Statistics::menu(Tasks::Task* list, int num)
{
	bool flag = true;
	int choice;
	while(flag)
	{
		cout<<"Co chcesz zrobic?"<<endl;
		cout<<"1.Wyswietl wszystkie taski"<<endl;
		cout<<"2.Wyœwietl taski konkretnego usera"<<endl;
		cout<<"3.Wyjscie"<<endl;
		cin >>choice;
		switch(choice)
		{
		case 1:
			wszystkieZadania(list, num);
			break;
		case 2:
			zadaniaJednegoUsera(list, num);
			break;
		case 3:
			flag=false;
			break;
		default:
			cout<<"Nieprawidlowy wybor"<<endl;
			break;
		}
	}
}

Statistics::Statistics(void)
{
}


Statistics::~Statistics(void)
{
}
