#include "RPN.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Usage: ./rpn \"[RPN expression]\"" << std::endl;
        return 1;
    }
    RPN::rpn(av[1]);
    return 0;
}