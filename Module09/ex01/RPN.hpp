#ifndef RPN_HPP
# define RPN_HPP

#include <stack>
#include <iostream>
#include <string>
#include <limits>
#include <cstdlib>

#define MAX_DOUBLE std::numeric_limits<double>::max()
#define MIN_DOUBLE std::numeric_limits<double>::min()

class RPN{
    private:
        RPN();
        RPN(const RPN &copy);
        ~RPN();
        RPN &operator=(const RPN &copy);
        static bool getNumber(std::string input, unsigned int &i, std::stack<double> &numbers);
        static bool isOperator(char c);
        static bool checkRange(double a, double b, char c);
        static bool calculater(char c, std::stack<double> &numbers); 
    public:
        static void rpn(std::string input);
};




#endif