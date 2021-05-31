#include "linkedPage.h"

/**
 * Default Constructor
 */
LinkedPage::LinkedPage()
{

}

/**
 * Constuctor that accepts table content and then generates the appropriate
 * HTML elements
 */
LinkedPage::LinkedPage(std::string tableContent_, bool addElements)
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
	HTML::AnchorTag a("Back");
	addAnchor(a);
}


/**
 * Writes this HTML data to disk giving them a number
 */
void LinkedPage::writeLinkedPages(LinkedPage& linked, int i)
{
	std::string id;
	id = id.append("C:\\Users\\JSmar\\Desktop\\HTMLFolder\\");
	id = id.append(std::to_string(i));
	id = id.append(".html");
	std::ofstream ofs;
	ofs.open(id, std::ofstream::out);
	ofs << linked;
	ofs.close();
}

/**
* Outputs this html data to console
*/
void LinkedPage::viewPage(LinkedPage& linked) 
{
		std::cout << linked;
}

/**
*Loops through contactsVector_ and creates an HTML page for each element
*writing it to disk and also displaying it in the console
*/
void LinkedPage::createLinkedPages(std::vector<contactsVector>contactsVector_, bool addElements)
{
	{
		int i = 1;
		std::string outputStr;
		
			for (auto& e : contactsVector_)
			{
				
				outputStr = "";
				outputStr = outputStr.append(e.createTableRow()).append("\n");

				LinkedPage linked(outputStr, addElements);

				if (addElements == true)
				{
					linked.addElements();
				}

				writeLinkedPages(linked, i);
				viewPage(linked);
				i++;
			}
		
	}
}




