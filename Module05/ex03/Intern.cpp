/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senyilma <senyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 23:01:41 by senyilma          #+#    #+#             */
/*   Updated: 2024/10/05 15:43:41 by senyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(Intern const & copyObj) {
	*this = copyObj;
}

Intern & Intern::operator=(Intern const & copyObj) {
	if (this == &copyObj)
		return *this;
	return *this;
}

AForm* Intern::makeForm(std::string formName, std::string target) {

	std::string formNames[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	AForm *returnForm = NULL;
	
	AForm *forms[3] = {
		new ShrubberyCreationForm(target),
		new RobotomyRequestForm(target),
		new PresidentialPardonForm(target),
	};

	for (int i = 0; i < 3; i++) {
		if (formName == formNames[i]) {
			std::cout << "Intern creates " << formName << std::endl;
			returnForm = forms[i];
		}
		else 
			delete forms[i];
	}
	return returnForm ? returnForm : throw Intern::FormNotFoundException();
}

const char* Intern::FormNotFoundException::what() const throw()
{
	return "Form not found!";
}