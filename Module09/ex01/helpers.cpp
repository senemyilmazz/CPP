#include "RPN.hpp"

bool getNumber(std::string input, unsigned int &i, std::stack<double> &numbers)
{
    std::string temp;
    while (isdigit(input[i]))
        temp += input[i++];
    if (temp.length() > 1)
    {
        std::cout << "Error1" << std::endl;
        return false;
    }
    numbers.push(std::strtod(temp.c_str(), NULL));
    return true;
}

bool isOperator(char c)
{
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

bool checkRange(double a, double b, char c)
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

bool calculater(char c, std::stack<double> &numbers)
{
    if (numbers.size() < 2)
    {
        std::cout << "Error2" << std::endl;
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
        std::cout << "Error3" << std::endl;
        return false;
    }
    return true;
}