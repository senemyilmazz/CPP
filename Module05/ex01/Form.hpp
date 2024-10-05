#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form 
{
	private:
		std::string const name;
		bool sign;
		int const gradeToSign;
		int const gradeToExecute;
	
	public:
		Form(std::string name, int gradeToSign, int gradeToExecute);
		~Form();
		Form(Form const & copyObj);
		Form & operator=(Form const & copyObj);
		
		std::string getName() const;
		bool getSign() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;
		
		void beSigned(Bureaucrat& bureaucrat);
};

#endif