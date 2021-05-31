#include "demo.h"

static std::vector<contactsVector>contactsVector_;

/**
* Used in openReadClose() to create the contactsVector_
*/
int Demo::Demo::callback(void* NotUsed, int argc, char** argv, char** azColName) {

	int i;

	std::string firstName(argv[0]);
	std::string lastName(argv[1]);
	std::string email(argv[2]);
	std::string country(argv[3]);
	std::string id(argv[4]);
	std::string category(argv[5]);

	

	contactsVector cv(firstName, lastName, email, country, id, category);

	contactsVector_.push_back(cv);

	return 0;
}

/**
* Reads data from database and creates a vector using callback
*/
int Demo::Demo::openReadClose() {

	sqlite3* db;

	int rc;


	rc = sqlite3_open("contacts.db", &db);

	if (rc) {

		std::cerr << "Error open DB" << sqlite3_errmsg(db) << std::endl;
		return -1;
	}
	else
		std::cout << "Opened Database Successfully!" << std::endl;

	std::string query = "select * from contacts";
	sqlite3_exec(db, query.c_str(), callback, NULL, NULL);

	sqlite3_close(db);
	return 0;
}
/**
* Shows a menu to showcase each function
*/
int Demo::Demo::demoHTML()
{
	LinkedPage linked;
	IndexPage index;
	contactsVector cv;

	int choice = 0;
	bool addElements = false;
	while (choice != 7) {

		std::cout << "===============================================\n";
		std::cout << "1. Linked Pages source code and write to disk\n";
		std::cout << "2. Index Pages source code and write to disk\n";
		std::cout << "3. Search for a specific record\n";
		std::cout << "4. Show all records\n";
		std::cout << "5. Add Element to Index Page\n";
		std::cout << "6. Add Element to Linked Pages\n";
		std::cout << "7. Quit\n";
		std::cout << "Input your choice: ";

		std::cin >> choice;

		if (choice == 1)
		{
			addElements = false;
			linked.createLinkedPages(contactsVector_, addElements);
		}
		else if (choice == 2)
		{
			addElements = false;
			index.createIndexPage(contactsVector_,addElements);
		}
		else if (choice == 3)
		{
			cv.findContact(contactsVector_);
		}
		else if (choice == 4)
		{
			cv.getConsoleTableData(contactsVector_);
		}
		else if (choice == 5)
		{
			addElements = true;
			linked.createLinkedPages(contactsVector_, addElements);
		}
		else if (choice == 6)
		{
			addElements = true;
			index.createIndexPage(contactsVector_, addElements);
		}
		else if (choice == 7)
		{
			std::cout << "You have chosen to quit, goodbye";
			return 0;
		}
		else
		{
			std::cout << "Please input a correct choice";
		}
	}
	std::cout << "You don't want to be here - Catastrophic Error";
	return 0;
}

