#include "ScalarConverter.hpp"

char ScalarConverter::_char = 0;
int ScalarConverter::_int = 0;
float ScalarConverter::_float = 0.0f;
double ScalarConverter::_double = 0.0;
types ScalarConverter::_type = UNKNOWN;

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &obj) 
{
	*this = obj;
}

ScalarConverter::~ScalarConverter() {}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &obj)
{
	_char = obj._char;
	_int = obj._int;
	_float = obj._float;
	_double = obj._double;
	return *this;
}

void ScalarConverter::convert(const std::string &str)
{	
	ScalarConverter::getType(str);
	ScalarConverter::casting(str);
	ScalarConverter::printChar();
	ScalarConverter::printInt();
	ScalarConverter::printFloatDouble(str);
}
