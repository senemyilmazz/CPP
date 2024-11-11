#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string input, std::string dataBase) : input(input), dataBase(dataBase) {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy) : input(copy.input), dataBase(copy.dataBase) {}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &copy) {
    if (this == &copy)
        return *this;
    this->amounts = copy.amounts;
    this->rates = copy.rates;
    this->input = copy.input;
    this->dataBase = copy.dataBase;
    return *this;
}

BitcoinExchange::~BitcoinExchange() {}

void BitcoinExchange::calcAssets() {
    readDB();
    readInput();
    printExchange();
}