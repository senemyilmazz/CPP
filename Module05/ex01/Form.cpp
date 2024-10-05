/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senyilma <senyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 19:00:24 by senyilma          #+#    #+#             */
/*   Updated: 2024/05/23 13:00:29 by senyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1)
		throw Bureaucrat::GradeTooHighException();
	if (gradeToSign > 150)
		throw Bureaucrat::GradeTooLowException();
	this->sign = false;
}

Form::~Form() {}

Form::Form(Form const & copyObj) : name(copyObj.name), gradeToSign(copyObj.gradeToSign), gradeToExecute(copyObj.gradeToExecute) {}

Form & Form::operator=(Form const & copyObj) {
	if (this == &copyObj)
		return *this;
	this->sign = copyObj.sign;
	return *this;
}

std::string Form::getName() const {
	return this->name;
}

bool Form::getSign() const {
	return this->sign;
}

int Form::getGradeToSign() const {
	return this->gradeToSign;
}

int Form::getGradeToExecute() const {
	return this->gradeToExecute;
}

void Form::beSigned(Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() > this->gradeToSign)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	this->sign = true;
}