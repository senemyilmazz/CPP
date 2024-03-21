/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senyilma <senyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 03:37:08 by senyilma          #+#    #+#             */
/*   Updated: 2024/03/21 03:37:59 by senyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
     Zombie* Foo = newZombie("Foo");
     Foo->announce();

     Zombie* Boo = newZombie("Boo");
     Boo->announce();

     randomChump("Doo");
     randomChump("Zoo");

     delete Foo;
     delete Boo;
}

//void __attribute__ ((destructor)) asd()
//{
//    system("leaks zombie");
//}