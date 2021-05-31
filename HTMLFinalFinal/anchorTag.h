#pragma once
#include <string>

namespace HTML {
	const std::string anchorTagStart = "<a>";
	const std::string anchorTagEnd = "</a>";
	const std::string anchorTagIndex = "<a href=\"index.html\">";

	class AnchorTag
	{
	public:
		AnchorTag(std::string content_);
		std::string getAnchorTagStr();

	private:
		std::string content_;
	};


}//end of namespace HTML


