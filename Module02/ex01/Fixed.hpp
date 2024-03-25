#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed 
{
    private:
        int rawBits;
        static const int fractialBits;
    public:
        Fixed();
        Fixed(const int row);
        Fixed(const float row);
        Fixed(const Fixed& copyObject);

        ~Fixed();
        
        int getRawBits() const;
        void setRawBits( int const raw );

        float toFloat() const;
        int toInt() const;

        Fixed& operator=(const Fixed& copyObject);
};

std::ostream& operator<<(std::ostream& output, const Fixed& fixed);

#endif