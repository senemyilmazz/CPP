#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm 
{
	private:
		std::string const name;
		bool sign;
		int const gradeToSign;
		int const gradeToExecute;
	
	public:
		AForm(std::string name, int gradeToSign, int gradeToExecute);
		virtual ~AForm();
		AForm(AForm const & copyObj);
		AForm & operator=(AForm const & copyObj);
		
		std::string getName() const;
		bool getSign() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;

		void beSigned(Bureaucrat& bureaucrat);
		virtual void execute(Bureaucrat const & executor) const = 0;
		
		class FormIsNotSigned : public std::exception {
			public:
				const char* what() const throw();
		};
};

#endif