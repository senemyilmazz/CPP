#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <iostream>
# include <string>
# include <limits>

# define FLOAT_MAX std::numeric_limits<float>::max()
# define FLOAT_MIN std::numeric_limits<float>::min()
# define DOUBLE_MAX std::numeric_limits<double>::max()
# define DOUBLE_MIN std::numeric_limits<double>::min()

enum types
{
	EMPTY,
	INFINITE,
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	UNKNOWN
};

class ScalarConverter
{
	private:
		static char _char ;
		static int _int ;
		static float _float ;
		static double _double ;
		static types _type ;

		ScalarConverter();
		ScalarConverter(const ScalarConverter &obj);
		~ScalarConverter();
		ScalarConverter &operator=(const ScalarConverter &obj);

		static void print();
		static void getType(const std::string &str);
		static void casting(const std::string &str);
		static void printChar();
		static void printInt();
		static void printFloatDouble(const std::string str);

	public:
		static void convert(const std::string &str);
};	

#endif