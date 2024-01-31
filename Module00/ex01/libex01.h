#ifndef LIBEX01_H
# define LIBEX01_H

# include "ClassPhoneBook.h"
# include "ClassContact.h"
# include <iostream>
# include <iomanip>

# ifndef ADD
#  define ADD 1
# endif

# ifndef SEARCH
#  define SEARCH 2
# endif

# ifndef EXIT
#  define EXIT 3
# endif

void addProcess(PhoneBook *phoneBook);
void searchProcess(PhoneBook *phoneBook);



#endif