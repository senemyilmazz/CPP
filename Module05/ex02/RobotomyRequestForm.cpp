/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senyilma <senyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 20:15:37 by senyilma          #+#    #+#             */
/*   Updated: 2024/10/05 15:21:07 by senyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
	this->target = target;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & copyObj) : AForm(copyObj), target(copyObj.target)
{
	*this = copyObj;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & copyObj)
{
	if (this == &copyObj)
		return *this;
	this->target = copyObj.target;
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & bureaucrat) const
{
	if (bureaucrat.getGrade() > this->getGradeToExecute())
		throw Bureaucrat::GradeTooLowException();
	if (!this->getSign())
		throw AForm::FormIsNotSigned();
	std::cout << "...sşsşsşsşsşsş..." << std::endl;
	srand(time(NULL));
	if (rand() % 2)
	{
		std::cout << "Robotomy failed." << std::endl;
		throw RobotomyRequestForm::RobotomyFailedException();
	}
	std::cout << this->target << " has been robotomized successfully" << std::endl;
}

const char* RobotomyRequestForm::RobotomyFailedException::what() const throw()
{
	return "Robotomy failed.";
}
