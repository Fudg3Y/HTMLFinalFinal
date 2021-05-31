#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "tableTag.h"
#include "paragraphTag.h"
#include "docTypeDeclarationTag.h"
#include "headTag.h"
#include "anchorTag.h"



namespace HTML {

	const std::string htmlStart = "<html>";
	const std::string htmlEnd = "</html>";
	const std::string bodyTagStart = "<body>";
	const std::string bodyTagEnd = "</body>";

	using htmlVector = std::vector <std::string>;

	class HTMLPage
	{
	public:
		
		size_t addTable(TableTag& t);

		size_t addParagraph(ParagraphTag& p);

		size_t addAnchor(AnchorTag& a);

		size_t docTypeDeclarationTag(DocTypeDeclarationTag& d);

		size_t headTag(HeadTag& head);

		virtual void viewPage();
		
		htmlVector htmlVector_;
		
		friend std::ostream& operator <<(std::ostream& o, HTMLPage& html);

		void addElements();
		
	
	};

}//end of namespace HTML

