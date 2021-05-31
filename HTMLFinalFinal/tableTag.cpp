#include "tableTag.h"
#include <string>

/**
*Default constructor accepts a string
*/
HTML::TableTag::TableTag(std::string content)
	:content_{content}
{
	
}

/**
*Creates a <table> along with appropriate <th> tags and is used to take in 
* <td> content
*/
std::string HTML::TableTag::getTableTagStr()
{
	return tableTagStart +
		"\n"+
		tableHeaderTagStart +
		"First Name"+
		tableHeaderTagEnd +
		tableHeaderTagStart +
		"Last Name" +
		tableHeaderTagEnd +
		tableHeaderTagStart +
		"Email" +
		tableHeaderTagEnd +
		tableHeaderTagStart +
		"Country" +
		tableHeaderTagEnd +
		tableHeaderTagStart +
		"ID" +
		tableHeaderTagEnd +
		tableHeaderTagStart +
		"Category" +
		tableHeaderTagEnd +
		"\n" +
		content_ +
		tableTagEnd
		;
}