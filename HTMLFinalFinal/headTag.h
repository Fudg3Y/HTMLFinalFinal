#pragma once
#include <string>

namespace HTML {
	const std::string headTagStart = "<head>\n";
	const std::string headTagEnd = "</head>";
	const std::string metaCharset = "<meta charset=\"utf - 8\">\n";
	const std::string metaViewport = "<meta name=\"viewport\" content=\"width = device - width, initial - scale = 1, shrink - to - fit = no\">\n";
	const std::string linkBootstrap = "<link rel=\"stylesheet\" href=\"https://maxcdn.bootstrapcdn.com/bootstrap/4.0.0/css/bootstrap.min.css\" integrity=\"sha384-Gn5384xqQ1aoWXA+058RXPxPg6fy4IWvTNh0E263XmFcJlSAwiGgFAW/dAiS6JXm\" crossorigin=\"anonymous\">\n";


	class HeadTag
	{
	public:
		HeadTag();
		std::string getHeadTagStr();
	private:
		
	};
}//end of namespace HTML

