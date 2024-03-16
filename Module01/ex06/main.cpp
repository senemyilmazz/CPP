#include "Harl.hpp"

int getLevel(std::string level)
{
    if (level == "DEBUG")
        return DEBUG;
    else if(level == "INFO")
        return INFO;
    else if (level == "WARNING")
        return WARNING;
    else if (level == "ERROR")
        return ERROR;
    return 0;
}

void getComplains(int level, Harl &harl) 
{
    switch (level) 
    {
        case DEBUG :
            harl.complain("DEBUG");
            break;
        case INFO :
            harl.complain("INFO");
            break;
        case WARNING :
            harl.complain("WARNING");
            break;
        case ERROR : {
            harl.complain("ERROR");
            return;
        }
        default :
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            return;
    }
    getComplains(level + 1, harl);
}


int main(int ac, char* av[])
{
    Harl harl;

    if (ac == 2) 
        getComplains(getLevel(av[1]), harl);
    else
        std::cout << "Invalid parameter." << std::endl;
    return (0);
}