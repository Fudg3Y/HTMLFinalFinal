#include "indexPage.h"

/**
 * Default Constructor for IndexPage
 */
IndexPage::IndexPage()
{

}
/**
 * Constructor for index page uses tableContent to generate HTML around it
 */
IndexPage::IndexPage(std::string tableContent_)
{
	this->htmlVector_.push_back(HTML::htmlStart);
	this->htmlVector_.push_back(HTML::bodyTagStart);
	this->htmlVector_.push_back(HTML::bodyTagEnd);
	this->htmlVector_.push_back(HTML::htmlEnd);
	HTML::HeadTag h;
	headTag(h);
	HTML::DocTypeDeclarationTag d;
	docTypeDeclarationTag(d);
	HTML::TableTag t(tableContent_);
	addTable(t);
}

/**
 * Writes the index page object to disk
 */
void IndexPage::writeIndexPage(IndexPage& index)
{
	std::string id;
	id = id.append("C:\\Users\\JSmar\\Desktop\\HTMLFolder\\");
	id = id.append("index.html");
	std::ofstream ofs;
	ofs.open(id, std::ofstream::out);
	ofs << index;
	ofs.close();
}


/**
 * Outputs the index page to disk
 */
void IndexPage::viewPage(IndexPage& index)
{
	std::cout << index;
}

/**
 * Uses createLinkTableRow to create a table, passes this to the default
 * constructor and then writes this to disk and displays it
 */
void IndexPage::createIndexPage(std::vector<contactsVector>contactsVector_, bool addElements)
{
	std::string outputStr;
	int iter = 1;

	for (auto& e : contactsVector_)
	{
		
		outputStr = outputStr.append(e.createLinkTableRow(iter)).append("\n");
		iter++;
	}
	IndexPage index(outputStr);

	if (addElements == true)
	{
		index.addElements();
	}

	writeIndexPage(index);
	viewPage(index);
}


