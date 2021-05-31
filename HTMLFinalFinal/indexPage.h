#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include "HTMLPage.h"
#include "contactsVector.h"
class IndexPage : public HTML::HTMLPage
{
public:
	
	IndexPage();
	IndexPage(std::string tableContent_);
	void writeIndexPage(IndexPage& h);

	void viewPage(IndexPage& h);

	void createIndexPage(std::vector<contactsVector> contactsVector_, bool addElements);

	

private:
	std::string tableContent_;
};

