#pragma once
#include <string>
using namespace std;
class User {
	string username;
	string password;
	string name;
	string surname;
	string email;

	bool isLogged;
public:
	User(string username, string password, string name, string surname, string email);

	string getUsername();

	string getEmail();

	string getName();

	string getSurname();

	bool isLoggedIn();

	string registerUser(string username, string password, string name, string surname, string email);

	string authenticateUser(string username, string password);

	User();

};