#include "HTMLPage.h"
#include "demo.h"

namespace HTML {

	/**
	* adds a table to the bottom of a page
	*/
	size_t HTMLPage::addTable(TableTag& t)
	{
		htmlVector::iterator iter = htmlVector_.end() - 2;
		htmlVector_.insert(iter, t.getTableTagStr());
		return size_t();
	}

	/**
	* adds a paragraph to the bottom of a page
	*/
	size_t HTMLPage::addParagraph(ParagraphTag& p)
	{
		htmlVector::iterator iter = htmlVector_.end() - 2;
		htmlVector_.insert(iter, p.getParagraphTagStr());
		return size_t();
	}

	/**
	* adds an anchor tag to the bottom of a page
	*/
	size_t HTMLPage::addAnchor(AnchorTag& a)
	{
		htmlVector::iterator iter = htmlVector_.end() - 2;
		htmlVector_.insert(iter, a.getAnchorTagStr());
		return size_t();
	}

	/**
	* adds a doctype declaration to the top of a page
	*/
	size_t HTMLPage::docTypeDeclarationTag(DocTypeDeclarationTag& d)
	{
		htmlVector::iterator iter = htmlVector_.begin();
		htmlVector_.insert(iter, d.getDocTypeDeclarationTagStr());
		return size_t();
	}

	/**
	* adds a headTag after the doctype declaration (or after the first element
	* in htmlVector_)
	*/
	size_t HTMLPage::headTag(HeadTag& head)
	{
		htmlVector::iterator iter = htmlVector_.begin()+1;
		htmlVector_.insert(iter, head.getHeadTagStr());
		return size_t();
	}
	
	/**
	* goes through htmlVector_ and outputs the vector
	*/
	std::ostream& operator<<(std::ostream& o, HTMLPage& html)
	{
		std::string outputStr = "";

		for (auto& e : html.htmlVector_)
			outputStr = outputStr.append(e).append("\n");
		return o << outputStr;
	}

	/**
	* used within indexPage and linkedPage
	*/
	void HTMLPage::viewPage()
	{
		
	}
	/**
	* Menu for adding elements
	*/
	void HTMLPage::addElements()
	{
		
			std::string input;
			int choice = 0;


			std::cout << "What would you like to add?\n";
			std::cout << "1. Paragraph Tag\n";
			std::cout << "2. Anchor Tag\n";
			std::cout << "3. Go to next page\n";
			std::cout << "4. Quit Adding Tags\n";
			std::cout << "Input your choice: \n";


			std::cin >> choice;

			while (choice != 3) {
				if (choice == 1)
				{
					std::cout << "Enter the content for the paragraph tag\n";
					std::cin >> input;
					HTML::ParagraphTag p(input);
					addParagraph(p);
					break;

				}
				else if (choice == 2)
				{
					std::cout << "Enter the content for the anchor tag\n";
					std::cin >> input;
					HTML::AnchorTag a(input);
					addAnchor(a);
					break;

				}
				else if (choice == 3)
				{
					break;
				}
				else if (choice == 4)
				{
					Demo::Demo d;
					d.demoHTML();
				}
				else
				{
					choice == 0;
					std::cout << "Please enter a valid choice";
				}
				
			}
		
	}
}