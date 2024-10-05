#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP


# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat 
{
	private:
		const std::string name;
		int grade;
	
	public:
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat& copyObj);
		Bureaucrat& operator=(const Bureaucrat& copyObj);
		
		std::string getName() const;
		int getGrade() const;

		void incrementGrade();
		void decrementGrade();

		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();
		};

		void signForm(Form& form);
};

std::ostream& operator<<(std::ostream& output, const Bureaucrat& bureaucrat);


#endif