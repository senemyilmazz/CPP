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
            std::cerr << "Error" << std::endl;
            return;
        }
    }
    if (numbers.size() != 1)
    {
        std::cerr << "Error" << std::endl;
        return;
    }
    std::cout << numbers.top() << std::endl;
}

bool RPN::getNumber(std::string input, unsigned int &i, std::stack<double> &numbers)
{
    std::string temp;
    while (isdigit(input[i]))
        temp += input[i++];
    if (temp.length() > 1) {
        std::cerr << "Error" << std::endl;
        return false;
    }

    numbers.push(std::strtod(temp.c_str(), NULL));
    return true;
}

bool RPN::isOperator(char c)
{
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

bool RPN::checkRange(double a, double b, char c)
{
    if (c == '+')
    {
        if ((a + b) >= MAX_DOUBLE || (a + b) <= INT_MIN)
            return false;
    }
    if (c == '-')
    {
        if ((a - b) >= MAX_DOUBLE || (a - b) <= INT_MIN)
            return false;
    }
    if (c == '*')
    {
        if ((a * b)>= MAX_DOUBLE || (a * b) <= INT_MIN)
            return false;
    }
    if (c == '/')
    {
        if (b == 0 || (a / b) >= MAX_DOUBLE || (a / b) <= INT_MIN)
            return false;
    }
    return true;
}

bool RPN::calculater(char c, std::stack<double> &numbers)
{
    if (numbers.size() < 2)
    {
        std::cerr << "Error" << std::endl;
        return false;
    }
    double top1 = numbers.top();
    numbers.pop();
    double top2 = numbers.top();
    numbers.pop();

    if (c == '+' && checkRange(top2, top1, c))
        numbers.push(top2 + top1);
    else if (c == '-' && checkRange(top2, top1, c))
        numbers.push(top2 - top1);
    else if (c == '*' && checkRange(top2, top1, c))
        numbers.push(top2 * top1);
    else if (c == '/' && checkRange(top2, top1, c))
        numbers.push(top2 / top1);
    else
    {
        std::cerr << "Error" << std::endl;
        return false;
    }
    return true;
}
