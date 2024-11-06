#include "BitcoinExchange.hpp"

bool DayValid(int day, int month, int year) 
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

bool dateValid(std::string date) {
    int year;
    int month;
    int day;

    if (date.size() != 10)
        return false;
    if (date[4] != '-' || date[7] != '-')
        return false;
    try {//bu değerleri inte castliyorum ama örneğin ay bilgisi "1." şeklinde girilirse hata vermeli kontrol et
        year = static_cast<int>(std::strtod(date.substr(0, 4).c_str(), NULL));
        month = static_cast<int>(std::strtod(date.substr(5, 2).c_str(), NULL));
        day = static_cast<int>(std::strtod(date.substr(8, 2).c_str(), NULL));
    } catch (std::exception &e) { //std::invalid_argument //std::out_of_range ayrı ayrı yakala
        return false;
    }
    if (month < 1 || month > 12 || year < 0 || !DayValid(day, month, year))
        return false;
    return true;
}

bool rateValid(std::string rate) {
    if (rate.size() == 0)
        return false;
    try{
        double d = std::strtod(rate.c_str(), NULL);
        if (d < 0 || d > 100000)
            return false;
    }catch(const std::exception& e){
        return false;
    }    
    return true;
}

void BitcoinExchange::printExchange() {
    std::list<std::pair<std::string, std::string>>::iterator itA = (this->amounts).begin();

    while (itA != (this->amounts).end()) {
        if (!dateValid(itA->first) || !rateValid(itA->second)) {
            //hata mesajlarnı valid fonksiyonlarında yazdır!!!!!
            itA = (this->amounts).erase(itA);
            continue;
        }
        std::list<std::pair<std::string, std::string>>::iterator itR = (this->amounts).begin();
        while (itR != (this->rates).end()) {
            if (itA->first == itR->first) {
                std::cout << itA->first << " => " << itA->second << " = " 
                << (std::strtod(itR->second.c_str(), NULL) * std::strtod(itA->second.c_str(), NULL)) << std::endl;
                break;
            }
            itR++;
            //
            //
            //
            //

        }
        itA = (this->amounts).erase(itA);
    }
}