#include "ScalarConverter.hpp"

bool isdigitloop(const std::string &str, int i)
{
	if (!str[i])
		return false;
	while (str[i])
	{
		if (!isdigit(str[i]))
			return false;
		i++;
	}
	return true;
}

void digitTypeCheck(const std::string &str, types& type, char c)
{
	int i = 0;
	std::string str2 = str;
	if (str2[0] == '+' || str2[0] == '-')
		i++;
	if (c == 'i')
	{
		if (isdigitloop(str2, i))
			type = INT;
		else
			type = UNKNOWN;
	}
	else
	{
		size_t dot = str2.find('.');
		if (c == 'f')
			str2 = str.substr(0,str.length()-1);
		if (isdigitloop(str2.substr(0, dot), i) && isdigitloop(str2.substr(dot + 1, str2.length()), 0))
			if (c == 'f')
				type = FLOAT;
			else
				type = DOUBLE;
		else
			type = UNKNOWN;
	}
}

void ScalarConverter::getType(const std::string &str)
{
	if (str.length() == 0)
		_type = EMPTY;
	else if ((str.compare("nan") == 0) || (str.compare("+inf") == 0) || (str.compare("-inf") == 0)
			|| (str.compare("-inff") == 0) || (str.compare("+inff") == 0) || (str.compare("nanf") == 0))
		_type = INFINITE;
	else if (str.length() == 1 && !isdigit(str[0]))
		_type = CHAR;
	else if (std::count(str.begin(), str.end(), '.') == 1)
	{
		if (str[str.length() - 1] == 'f' && std::count(str.begin(), str.end(), 'f') == 1)
			digitTypeCheck(str, _type, 'f');
		else
			digitTypeCheck(str, _type, 'd');
	}
	else
		digitTypeCheck(str, _type, 'i');
}
