#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

#include <iostream>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
	private:
		std::string target;
	public:
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm const & copyObj);
		RobotomyRequestForm& operator=(RobotomyRequestForm const & copyObj);

		void execute(Bureaucrat const& bureaucrat) const;
		
		class RobotomyFailedException : public std::exception
		{
			public:
				const char* what() const throw();
		};
};

#endif