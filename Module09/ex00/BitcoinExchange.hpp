#ifndef BITCOIN_EXCHANGE_HPP
# define BITCOIN_EXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <list>
#include <vector>
#include <utility>
#include <cstdlib>

class BitcoinExchange {
    private:
        std::list< std::pair<std::string, std::string> > rates;
        std::list< std::pair<std::string, std::string> > amounts;
        std::string input;
        std::string dataBase;
    public:
        BitcoinExchange(std::string input, std::string dataBase);
        BitcoinExchange(const BitcoinExchange &copy);
        ~BitcoinExchange();
        BitcoinExchange &operator=(const BitcoinExchange &copy);

        void readInput();
        void readDB();
        void printExchange();
        void calcAssets();
};


#endif