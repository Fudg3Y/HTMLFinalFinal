#pragma once

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

const std::string tableDataStart = "<td>";
const std::string tableDataEnd = "</td>";
const std::string tableRowStart = "<tr>";
const std::string tableRowEnd = "</tr>";
const std::string linkTableRowStartOpen = "<tr onclick=\"location.href='";
const std::string linkTableRowStartClose = ".html'\" style='cursor: pointer'>";
class contactsVector
{
public:
	contactsVector();
	contactsVector(
		std::string& firstName,
		std::string& lastName,
		std::string& email,
		std::string& country,
		std::string& id,
		std::string& category
	);

	std::string tableData(std::string data);
	std::string createTableRow();
	std::string createLinkTableRow(int i);
	std::string createConsoleTable();
	void getConsoleTableData(std::vector<contactsVector>contactsVector_);
	void findContact(std::vector<contactsVector> contactsVector_);

private:

	std::string firstName_;
	std::string lastName_;
	std::string email_;
	std::string country_;
	std::string id_;
	std::string category_;
};

