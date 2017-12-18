#include "User.h"

	User::User(string username, string password, string name, string surname, string email) {
		this->username = username;
		this->password = password;
		this->name = name;
		this->surname = surname;
		this->email = email;
		this->isLogged = true;
	}

	string User::getUsername() {
		return this->username;
	}

	string User::getEmail() {
		return this->email;
	}

	string User::getName() {
		return this->name;
	};

	string User::getSurname() {
		return this->surname;
	};

	bool User::isLoggedIn() {
		return this->isLogged;
	}

	string User::registerUser(string username, string password, string name, string surname, string email) {
		return "";
	}

	string User::authenticateUser(string username, string password) {
		
		return "";
	}

	User::User() {};
