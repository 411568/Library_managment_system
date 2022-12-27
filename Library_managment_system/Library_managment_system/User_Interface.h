/*
	This is the console user interface for the library managment system
*/

#pragma once
#include "User.h"
#include "Student.h"
#include "Book.h"
#include "Lib_Item.h"
#include "Library.h"
#include "fileReadWrite.h"
#include <stdlib.h>
#include <iostream>
#include <string>

class User_Interface
{
private:
	//submenus
	void StudentMenu();

	void StudentBookCheck(std::string studentID);

	void StudentBookReturn(std::string studentID);

	void StudentBookReserve(std::string studentID);

	void AdminLogin();

	void AdminMenu();

	void ShowAllUsers();

	void ShowSingleUser(std::string studentID);

	void ShowAllBooks();

	void ShowSingleBook(int bID);

public:
	//start the main interface
	void start();

	static User_Interface& GetInstance();
};

