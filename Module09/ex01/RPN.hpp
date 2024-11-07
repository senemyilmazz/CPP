#ifndef RPN_HPP
# define RPN_HPP

#include <stack>
#include <iostream>
#include <string>
#include <limits>
#include <cstdlib>

#define MAX_DOUBLE std::numeric_limits<double>::max()
#define MIN_DOUBLE std::numeric_limits<double>::min()
#define INT_MIN std::numeric_limits<int>::min()

class RPN{
    private:
        RPN();
        RPN(const RPN &copy);
        ~RPN();
        RPN &operator=(const RPN &copy);
    public:

        static void rpn(std::string input);


};

bool getNumber(std::string input, unsigned int &i, std::stack<double> &numbers);
bool isOperator(char c);
bool checkRange(double a, double b, char c);
bool calculater(char c, std::stack<double> &numbers);


#endif