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
