#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed 
{
    private:
        int rawBits;
        static const int number = 8;
    public:
        Fixed();
        Fixed(const Fixed& copyObject);
        Fixed& operator=(const Fixed& copyObject);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};


#endif