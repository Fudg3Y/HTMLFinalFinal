#include "contactsVector.h"

/**
 * default constructor for contactsVector
 */
contactsVector::contactsVector()
{

}

/**
 * Constructor for contactsVector which will be used to hold data
 */
contactsVector::contactsVector(
	std::string& firstName,
	std::string& lastName,
	std::string& email,
	std::string& country,
	std::string& id,
	std::string& category)

	:firstName_{ firstName },
	lastName_{ lastName },
	email_{ email },
	country_{ country },
	id_{ id },
	category_{ category }

{

}
/**
 * encapsulates the data in <td> tag
 */
std::string contactsVector::tableData(std::string data)
{
	return tableDataStart + data + tableDataEnd;
}

/**
 * encapsulates row of data in <tr> tag
 */
std::string contactsVector::createTableRow()
{
	return 
		tableRowStart +
		
		tableData(firstName_) +
		
		tableData(lastName_) +
		
		tableData(email_) +
		
		tableData(country_) +
		
		tableData(id_) +
		
		tableData(category_) +
		
		tableRowEnd;
}

/**
 * Creates a table row with clickable link used within the index page
 * to navigate
 */
std::string contactsVector::createLinkTableRow(int i)
{
	return linkTableRowStartOpen +
			std::to_string(i) +
			linkTableRowStartClose +
		tableData(firstName_) +

		tableData(lastName_) +

		tableData(email_) +

		tableData(country_) +

		tableData(id_) +

		tableData(category_) +

		tableRowEnd;
		

}

/**
 * Returns a console friendly readable version of the data stored in 
 * one row contactsVector
 */
std::string contactsVector::createConsoleTable()
{
	return "First Name: " + firstName_ +
		" Last Name: " + lastName_ +
		" Email: " + email_ +
		" Country: " + country_ +
		" ID: " + id_ +
		" Category: " + category_ +
		"\n";
}

/**
 * loops through contactsVector and outputs the entire table of data in
 * the format seen above
 */
void contactsVector::getConsoleTableData(std::vector<contactsVector>contactsVector_)
{
	std::string outputStr;
	for (auto& e : contactsVector_)
	{
		outputStr = outputStr.append(e.createConsoleTable()).append("\n");
	}
	std::cout << outputStr;
	
}

/**
 * Searches for searchStr within contactsVector and displays it in console
 * if it has been found, else displays could not find a matching entry
 */
void contactsVector::findContact(std::vector<contactsVector> contactsVector_)
{
	
	std::string searchStr = "Camile";
	std::string actualStr;
	std::string outputStr;
	bool foundStr = false;

	for (auto& e : contactsVector_)
	{
		actualStr = "";
		actualStr = actualStr.append(e.createConsoleTable()).append("\n");

		std::size_t found = actualStr.find(searchStr);
		if (found != std::string::npos)
		{
			std::cout << actualStr;
			foundStr = true;
		}
		
		
	}
	if (foundStr == false)
	{
		std::cout << "Could not find a matching entry";
	}

	

	
}












