#include "ScalarConverter.hpp"

static bool isItDecimal(const std::string str, types type)
{
	std::string str2 = str;
	if (type == FLOAT)
		str2 = str2.substr(0, str2.length() - 1);
	str2 = str2.substr(str2.find('.') + 1, str2.length());
	size_t i = -1;
	while (++i < str2.length())
	{
		if (str2[i] != '0')
			return true;
	}
	return false;
}

void ScalarConverter::printChar() 
{
	if (_double > CHAR_MAX || _double < CHAR_MIN || _type == UNKNOWN || _type == INFINITE || _type == EMPTY)
		std::cout << "char : imposible" << std::endl;
	else if(!isprint(_char))
		std::cout << "char : Non displayable" << std::endl;
	else
		std::cout << "char : '" << _char << "'" << std::endl;
}

void ScalarConverter::printInt() 
{
	if (_type == INFINITE || _double > INT_MAX || _double < INT_MIN || _type == UNKNOWN || _type == EMPTY)
		std::cout << "int : imposible" << std::endl;
	else
		std::cout << "int : " << _int << std::endl;
}

void ScalarConverter::printFloatDouble(const std::string str) 
{
	if (_type == INFINITE)
	{
		if (str.substr(0,3).compare("nan") == 0)
		{
			std::cout << "float : nanf" << std::endl;
			std::cout << "double : nan" << std::endl;
		}
		else
		{
			std::cout << "float : " << str << "f" << std::endl;
			std::cout << "double : " << str << std::endl;
		}
	}
	else if (_type == UNKNOWN || _type == EMPTY)
	{
		std::cout << "float : imposible" << std::endl;
		std::cout << "double : imposible" << std::endl;
	}
	else if(_type != FLOAT && _type != DOUBLE)
	{
        std::cout << "float : " << _float << ".0f" << std::endl;
        std::cout << "double : " << _double << ".0" << std::endl;
    }
	else if (_type == FLOAT || _type == DOUBLE)
	{
		if (!isItDecimal(str, _type))
		{
			if (_float > FLOAT_MAX || _float < FLOAT_MIN)
				std::cout << "float : imposible" << std::endl;
			else
				std::cout << "float : " << _float << ".0f" << std::endl;
			if (_double > DOUBLE_MAX || _double < DOUBLE_MIN)
				std::cout << "double : imposible" << std::endl;
			else
				std::cout << "double : " << _double << ".0" << std::endl;
		}
		else
		{
			if (_float > FLOAT_MAX || _float < FLOAT_MIN)
				std::cout << "float : imposible" << std::endl;
			else
				std::cout << "float : " << _float << "f" << std::endl;
			if (_double > DOUBLE_MAX || _double < DOUBLE_MIN)
				std::cout << "double : imposible" << std::endl;
			else
				std::cout << "double : " << _double << std::endl;
		}
	}
}