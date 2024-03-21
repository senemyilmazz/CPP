/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senyilma <senyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 03:38:36 by senyilma          #+#    #+#             */
/*   Updated: 2024/03/21 03:38:37 by senyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyFileClass.hpp"

int main(int ac, char *av[]) 
{	
	if (ac == 4) 
	{
		MyFileClass copyFile(av[1]);
		copyFile.replace(av[2], av[3]);
	}
	return 0;
}
