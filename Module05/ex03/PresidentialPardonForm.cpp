/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senyilma <senyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 20:35:54 by senyilma          #+#    #+#             */
/*   Updated: 2024/10/05 15:10:23 by senyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5) 
{
	this->target = target;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & copyObj) : AForm(copyObj)
{
	*this = copyObj;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & copyObj)
{
	if (this == &copyObj)
		return *this;
	this->target = copyObj.target;
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const 
{
	if (executor.getGrade() > this->getGradeToExecute())
		throw Bureaucrat::GradeTooLowException();
	if (!this->getSign())
		throw AForm::FormIsNotSigned();
	std::cout << this->target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}