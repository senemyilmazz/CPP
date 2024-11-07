#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN &copy) {
    *this = copy;
}

RPN::~RPN() {}

RPN &RPN::operator=(const RPN &copy) {
    if (this == &copy)
        return *this;
    return *this;
}

void RPN::rpn(std::string input)
{
    std::stack<double> numbers;
    for (unsigned int i = 0; i < input.length(); i++)
    {
        if (input[i] == ' ')
            continue;
        if (isdigit(input[i]))
        {
            if (!getNumber(input, i, numbers))
                return;
        }
        else if (isOperator(input[i]))
        {
            if (!calculater(input[i], numbers))
                return;
        }
        else
        {
            std::cout << "Error" << std::endl;
            return;
        }
    }
    if (numbers.size() != 1)
    {
        std::cout << "Error" << std::endl;
        return;
    }
    std::cout << numbers.top() << std::endl;
}
