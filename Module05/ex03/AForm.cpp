/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senyilma <senyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 19:00:24 by senyilma          #+#    #+#             */
/*   Updated: 2024/10/05 15:09:37 by senyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Bureaucrat::GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw Bureaucrat::GradeTooLowException();
}

AForm::~AForm() {}

AForm::AForm(AForm const & copyObj) : name(copyObj.name), gradeToSign(copyObj.gradeToSign), gradeToExecute(copyObj.gradeToExecute) {}

AForm & AForm::operator=(AForm const & copyObj) {
	if (this == &copyObj)
		return *this;
	this->sign = copyObj.sign;
	return *this;
}

std::string AForm::getName() const {
	return this->name;
}

bool AForm::getSign() const {
	return this->sign;
}

int AForm::getGradeToSign() const {
	return this->gradeToSign;
}

int AForm::getGradeToExecute() const {
	return this->gradeToExecute;
}

void AForm::beSigned(Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() > this->gradeToSign)
		throw Bureaucrat::GradeTooLowException();
	this->sign = true;
}

const char* AForm::FormIsNotSigned::what() const throw()
{
	return "Form is not signed!";
}