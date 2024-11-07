#include "BitcoinExchange.hpp"

static bool DayValid(int day, int month, int year) 
{
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            if (day < 1 || day > 31)
                return false;
            break;
        case 4: case 6: case 9: case 11:
            if (day < 1 || day > 30)
                return false;
            break;
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) ||  year % 400 == 0) {
                if (day < 1 || day > 29)
                    return false;
            } else {
                if (day < 1 || day > 28)
                    return false;
            }
            break;
    }
    return true;
}

static bool dateValid(std::string date) {
    int year;
    int month;
    int day;

    if (date.size() != 10)
    {
        std::cout << "Error: bad input => " << date << std::endl;
        return false;
    }
    for (int i = 0; i < 10; i++) {
        if (((i == 4 || i == 7) && date[i] != '-') || (i != 4 && i != 7 && !isdigit(date[i])))
        {
            std::cout << "Error: bad input => " << date << std::endl;
            return false;
        }
    }
    year = static_cast<int>(std::strtod(date.substr(0, 4).c_str(), NULL));
    month = static_cast<int>(std::strtod(date.substr(5, 2).c_str(), NULL));
    day = static_cast<int>(std::strtod(date.substr(8, 2).c_str(), NULL));

    if (month < 1 || month > 12 || year < 0 || !DayValid(day, month, year))
    {
        std::cout << "Error: bad input => " << date << std::endl;
        return false;
    }
    return true;
}

static bool rateValid(std::string rate) {
    if (rate.size() == 0)
        return false;
    try{
        double d = std::strtod(rate.c_str(), NULL);
        if (d < 0 )
        {
            std::cout << "Error: not a positive number." << std::endl;
            return false;
        }
        if (d > 100000)
        {
            std::cout << "Error: too large a number." << std::endl;
            return false;
        }
    }catch(const std::out_of_range& e){
        std::cout << "Error: too large a number." << std::endl;
        return false;
    } catch (const std::invalid_argument& e) {
        std::cout << "Error: bad input => " << rate << std::endl;
        return false;
    }
    return true;
}

void BitcoinExchange::printExchange() {
    std::list< std::pair<std::string, std::string> >::iterator itA = (this->amounts).begin();
    std::list< std::pair<std::string, std::string> >::iterator itR;

    while (itA != (this->amounts).end()) 
    {
        if (!dateValid(itA->first) || !rateValid(itA->second)) 
        {
            itA++;
            continue;
        }
        itR = (this->rates).begin();
        while (itR != (this->rates).end() && itR->first <= itA->first)
            itR++;
        if (itR != (this->rates).begin() && itR->first != itA->first)
            itR--;
        std::cout << itA->first << " => " << itA->second << " = " 
        << static_cast<double>(std::strtod(itR->second.c_str(), NULL) * std::strtod(itA->second.c_str(), NULL)) << std::endl;
        itA++;
    }
}