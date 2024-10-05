#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

# include <iostream>
# include "AForm.hpp"

class PresidentialPardonForm : public AForm 
{
	private:
		std::string target;
	
	public:
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const & copyObj);
		PresidentialPardonForm & operator=(PresidentialPardonForm const & copyObj);

		void execute(Bureaucrat const & executor) const;
};

#endif