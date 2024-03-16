#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void ) {
	return _nbAccounts;
}

int	Account::getTotalAmount( void ){
	return _totalAmount;
}

int	Account::getNbDeposits( void ) {
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void ) {
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout << "accounts:" <<  getNbAccounts() \
			<< ";total:" << getTotalAmount() \
			<< ";deposits:" << getNbDeposits() \
			<< ";withdrawals:" << getNbWithdrawals() \
			<< std::endl;
}

Account::Account( int initial_deposit ) {
	static int i;

	this->_nbAccounts += 1;
	this->_totalAmount += initial_deposit;
	this->_amount = initial_deposit;
	this->_accountIndex = i;
	i++;
	
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex \
			<< ";amount:" << this->checkAmount() \
			<< ";created" \
			<< std::endl;
}

Account::~Account( void ) {
	this->_totalAmount -= this->_amount;
	this->_nbAccounts -= 1;

	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex \
			<< ";amount:" << this->checkAmount() \
			<< ";closed" \
			<< std::endl;
}

void	Account::makeDeposit( int deposit ) {
	int preAmount;
	preAmount = checkAmount();
	this->_nbDeposits += 1;
	this->_amount += deposit;
	this->_totalNbDeposits +=1 ;
	this->_totalAmount += deposit;

	this->_displayTimestamp();
	std::cout <<"index:" << this->_accountIndex \
			<< ";p_amount:" << preAmount \
			<< ";deposit:" << deposit \
			<< ";amount:" << checkAmount() \
			<< ";nb_deposits:" << this->_nbDeposits \
			<< std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	if (this->checkAmount() >= withdrawal) 
	{
		int preAmount;
		preAmount = checkAmount();
		this->_nbWithdrawals += 1;
		this->_amount -= withdrawal;
		this->_totalAmount -= withdrawal;
		this->_totalNbWithdrawals += 1;
		
		this->_displayTimestamp();
		std::cout <<"index:" << this->_accountIndex \
				<< ";p_amount:" << preAmount \
				<< ";withdrawal:" << withdrawal \
				<< ";amount:" << this->checkAmount() \
				<< ";nb_withdrawals:" << this->_nbWithdrawals \
				<< std::endl;
		return true;
	}
	else
	{
		this->_displayTimestamp();
		std::cout<<"index:" << this->_accountIndex \
				<< ";p_amount:" << this->checkAmount() \
				<< ";withdrawal:refused" \
				<< std::endl;
		return false;
	}
}

int		Account::checkAmount( void ) const {
	return this->_amount;
}

void	Account::displayStatus( void ) const  {
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex \
			<< ";amount:" << this->_amount \
			<< ";deposits:" <<this->_nbDeposits \
			<< ";withdrawals:" <<this->_nbWithdrawals \
			<< std::endl;
}

void	Account::_displayTimestamp( void ) 
{
	std::time_t now = std::time(NULL);
    
    std::tm* timeinfo = std::localtime(&now);

 	char buffer[20];
    std::strftime(buffer, sizeof(buffer), "%Y%m%d-%H%M%S", timeinfo);    
    
	std::cout << "[" << buffer << "] ";
}

Account::Account( void ) {}