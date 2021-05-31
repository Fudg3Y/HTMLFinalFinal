#pragma once
#include <string>

namespace HTML {
	const std::string tableTagStart = "<table class=\"table table-dark table-hover\">";
	const std::string tableTagEnd = "</table>";
	const std::string tableHeaderTagStart = "<th>";
	const std::string tableHeaderTagEnd = "</th>";

	class TableTag
	{
	public:
		TableTag(std::string content_);
		std::string getTableTagStr();
		

	private:
		std::string content_;
	};
}//end of namespace HTML
