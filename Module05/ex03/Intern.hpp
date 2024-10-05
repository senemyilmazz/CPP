#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern {
	public:
		Intern();
		~Intern();
		Intern(Intern const & copyObj);
		Intern & operator=(Intern const & copyObj);

		AForm* makeForm(std::string formName, std::string target);
		
		class FormNotFoundException : public std::exception {
			public:
				const char* what() const throw();
		};
};

#endif