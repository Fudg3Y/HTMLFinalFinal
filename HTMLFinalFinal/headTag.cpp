#include "headTag.h"
#include "tableTag.h"
#include <string>

/**
 *Default Constructor
 */
HTML::HeadTag::HeadTag()
	
{
	
}

/**
 * Returns the completed head tag as a string
 */
std::string HTML::HeadTag::getHeadTagStr()
{
	return headTagStart +
		metaCharset+
		metaViewport+
		linkBootstrap+
		headTagEnd;
}