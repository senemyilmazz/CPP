/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senyilma <senyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 17:50:59 by senyilma          #+#    #+#             */
/*   Updated: 2024/10/05 15:49:01 by senyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
# include "Intern.hpp"

void deleteFormIfExist(AForm* form)
{
	if (form)
	{
		delete form;
	}
}

int main() 
{

	Bureaucrat bureaucrat("senem", 1);
	Intern intern = Intern();
	std::string formNames[4] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon",
		"shrubbery creationjsjs",
	};
	AForm* form[4];
	
	try 
	{	
		for (int i = 0; i < 4; i++)
			form[i] = intern.makeForm(formNames[i], "home");
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	for (int i = 0; i < 4; i++)
	{
		if (form[i])
			bureaucrat.signForm(*form[i]);
	}
	for (int i = 0; i < 4; i++)
	{
		if (form[i])
			bureaucrat.executeForm(*form[i]);
	}
	for (int i = 0; i < 4; i++)
	{
		if (form[i])
			deleteFormIfExist(form[i]);
	}
	return 0;
}


