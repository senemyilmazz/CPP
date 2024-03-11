#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed 
{
    private:
        int rowBits;
        static const int fractialBits = 8;
    public:
        Fixed();
        Fixed(const int row);
        Fixed(const float row);
        Fixed(const Fixed& copyObject);
        Fixed& operator=(const Fixed& copyObject);
        ~Fixed();
        int getRowBits() const;
        float toFloat() const;
        int toInt() const;
};

std::ostream& operator<<(std::ostream& output, const Fixed& fixed);

#endif