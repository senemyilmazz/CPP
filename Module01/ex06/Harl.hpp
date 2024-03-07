#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

# ifndef DEBUG
#  define DEBUG 1
# endif
# ifndef INFO
#  define INFO 2
# endif
# ifndef WARNING
#  define WARNING 3
# endif
# ifndef ERROR
#  define ERROR 4
# endif

class Harl {
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    public:
        void complain(std::string level);
};

#endif