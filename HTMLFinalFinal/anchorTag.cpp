#include "anchorTag.h"
/**
 * default constructor accepts a string
 */
HTML::AnchorTag::AnchorTag(std::string content)
	:content_{content}
{
}

/**
 * string is encapsulated in <a> tag in this case only used to link back to index
 */
std::string HTML::AnchorTag::getAnchorTagStr()
{
	return anchorTagIndex +
		content_ +
		anchorTagEnd;
}
