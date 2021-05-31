#pragma once
#include <string>

namespace HTML {
	const std::string paragraphTagStart = "<p>";
	const std::string paragraphTagEnd = "</p>";
	

	class ParagraphTag
	{
	public:
		ParagraphTag(std::string content_);
		std::string getParagraphTagStr();


	private:
		std::string content_;
	};
}//end of namespace HTML
