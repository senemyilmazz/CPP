#include "BitcoinExchange.hpp"

void BitcoinExchange::readDB() {
    std::ifstream file(this->dataBase.c_str(), std::ios::in);

    if (!file.is_open()) {
        std::cerr << "Error: could not open file " << dataBase << std::endl;
        return;
    }
    std::string line;
    std::string date;
    std::string rate;
    int i = 0;
    std::getline(file, line);
    while(std::getline(file, line)) 
    {
        i = line.find(',');
        if(i == -1)
            continue;
        date = line.substr(0, i);
        rate = line.substr(i + 1);
        this->rates.push_back(std::make_pair(date, rate));
    }
	file.close();
}

void BitcoinExchange::readInput() {
    std::ifstream file(this->input.c_str(), std::ios::in);

    if (!file.is_open()) {
        std::cerr << "Error: could not open file " << input << std::endl;
        return;
    }
    std::string line;
    std::string date;
    std::string amount;
    int i = 0;
    std::getline(file, line);
    while(std::getline(file, line)) 
    {
        i = line.find('|');
        if(i == -1)
            i = static_cast<int>(line.size()) + 1;
        date = line.substr(0, i-1);  
        if (line.size() < static_cast<unsigned int>(i+2))
            i = -2;
        amount = line.substr(i+2); 
        this->amounts.push_back(std::make_pair(date, amount));
    }
	file.close();
}

