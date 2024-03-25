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
        //Constructors
        Fixed();
        Fixed(const int raw);
        Fixed(const float raw);
        Fixed(const Fixed& copyObject);
        //Destructor
        ~Fixed();
        
        //Properties
        int getRawBits() const;
        void setRawBits( int const raw );
        
        //Methods
        int toInt() const;
        float toFloat() const;
        static Fixed& min(Fixed& fixed1, Fixed& fixed2);
        static const Fixed& min(const Fixed& fixed1, const Fixed& fixed2);
        Fixed& max(Fixed& fixed1, Fixed& fixed2);
        static const Fixed& max(const Fixed& fixed1, const Fixed& fixed2);

        //Operator Overloadings
        //  Copy Assignment
        Fixed& operator=(const Fixed& copyObject);
        //  Comparison
        bool operator>(const Fixed& otherFixed) const;
        bool operator<(const Fixed& otherFixed) const;
        bool operator>=(const Fixed& otherFixed) const;
        bool operator<=(const Fixed& otherFixed) const;
        bool operator==(const Fixed& otherFixed) const;
        bool operator!=(const Fixed& otherFixed) const;
        //  Arithmetic
        Fixed operator+(const Fixed& otherFixed) const;
        Fixed operator-(const Fixed& otherFixed) const;
        Fixed operator*(const Fixed& otherFixed) const;
        float operator/(const Fixed& otherFixed) const;
        //  Increment-Decrement
        Fixed& operator++();
        Fixed operator++(int);
        Fixed& operator--();
        Fixed operator--(int);
};

std::ostream& operator<<(std::ostream& output, const Fixed& fixed);

#endif