/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senyilma <senyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 17:50:59 by senyilma          #+#    #+#             */
/*   Updated: 2024/10/05 15:49:54 by senyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() 
{

	Bureaucrat bureaucrat("senem", 1);
	AForm* form[3] = {
		new PresidentialPardonForm("presidentialPardon"),
		new RobotomyRequestForm("robotomyRequest"),
		new ShrubberyCreationForm("shrubberyCreation")
	};
	for (int i = 0; i < 3; i++)
	{
		bureaucrat.executeForm(*form[i]);
	}
	for (int i = 0; i < 3; i++)
	{
		bureaucrat.signForm(*form[i]);
	}
	for (int i = 0; i < 3; i++)
	{
		bureaucrat.executeForm(*form[i]);
	}
	for ( int i = 0; i < 3; i++)
	{
		delete form[i];
	}
	return 0;
}