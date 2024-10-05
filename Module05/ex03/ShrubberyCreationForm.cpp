/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senyilma <senyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 19:58:21 by senyilma          #+#    #+#             */
/*   Updated: 2024/10/05 15:10:48 by senyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreation", 145, 137) 
{
	this->target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & copyObj) : AForm(copyObj)
{
	*this = copyObj;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & copyObj)
{
	if (this == &copyObj)
		return *this;
	this->target= copyObj.target;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & bureaucrat) const 
{
	if (bureaucrat.getGrade() > this->getGradeToExecute())
		throw Bureaucrat::GradeTooLowException();
	if (!this->getSign())
		throw AForm::FormIsNotSigned();
	std::ofstream file(this->target + "_shrubbery");
	file << "      /\\      " << std::endl;
	file << "     /\\S\\     " << std::endl;
	file << "    /\\S\\S\\    " << std::endl;
	file << "   /S/\\/\\/\\   " << std::endl;
	file << "  /\\S\\/\\S\\/\\  " << std::endl;
	file << " /\\S\\/\\S\\/\\/\\ " << std::endl;
	file << "/\\S\\/\\/S/\\/S/\\" << std::endl;
	file << "      ||      " << std::endl;
	file << "      ||      " << std::endl;
	file << "      ||      " << std::endl;
	file.close();
}