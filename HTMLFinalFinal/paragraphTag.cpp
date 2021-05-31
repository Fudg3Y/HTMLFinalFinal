#include "paragraphTag.h"
/**
* default constructor accepts a string
*/
HTML::ParagraphTag::ParagraphTag(std::string content)
	:content_{ content }
{

}

/**
* Encapsulates the string within <p> tags
*/
std::string HTML::ParagraphTag::getParagraphTagStr()
{
	return paragraphTagStart +
		content_ +
		paragraphTagEnd;
}