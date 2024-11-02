#include "ScalarConverter.hpp"


void ScalarConverter::casting(const std::string &str)
{
	if (_type == EMPTY || _type == INFINITE)
		return;
	if (_type == CHAR)
	{
		char convertChar = static_cast<char>(str[0]);
		_char = static_cast<char>(convertChar);
		_int = static_cast<int>(convertChar);
		_float = static_cast<float>(convertChar);
		_double = static_cast<double>(convertChar);
	}
	else if (_type != UNKNOWN)
	{
		double vdigit  = strtod(str.c_str(), NULL);
		_char = static_cast<char>(vdigit);
		_int = static_cast<int>(vdigit);
		_float = static_cast<float>(vdigit);
		_double = static_cast<double>(vdigit);
	}
}
