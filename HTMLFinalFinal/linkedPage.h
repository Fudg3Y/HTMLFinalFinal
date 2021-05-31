#pragma once
#include "HTMLPage.h"
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include "contactsVector.h"

class LinkedPage : public HTML::HTMLPage
{
public:
	LinkedPage();
	LinkedPage(std::string tableContent_, bool addElements);
	void writeLinkedPages(LinkedPage& h, int i);
	void viewPage(LinkedPage& h);
	void createLinkedPages(std::vector<contactsVector>contactsVector_, bool addElements);
	
private:
	
	std::string tableContent_;
};

