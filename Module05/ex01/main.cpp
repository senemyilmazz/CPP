/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senyilma <senyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 17:50:59 by senyilma          #+#    #+#             */
/*   Updated: 2024/10/05 15:50:41 by senyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() 
{
	Bureaucrat bureaucrat("senem", 149);
	Form form = Form("form", 149, 0);
	bureaucrat.signForm(form);
	bureaucrat.decrementGrade();
	bureaucrat.signForm(form);
	bureaucrat.incrementGrade();
	bureaucrat.signForm(form);
	return 0;
}