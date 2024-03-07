#include "Account.hpp"
#include <iostream>

int	Account::getNbAccounts( void ) {
	return _nbAccounts;
}

int	Account::getTotalAmount( void ){
	return _totalAmount;
}

int	Account::getNbDeposits( void ) {
	return _totalNbDeposits
}

int	Account::getNbWithdrawals( void ) {
	return _totalNbWithdrawals;
}

//DISPLAYTIMESTAMP EKLE!!!!

void	Account::displayAccountsInfos( void ) {
	std::cout << "accounts:" <<  getNbAccounts() \
			<< ";total:" << getTotalAmount() \
			<< ";deposits:" << getNbDeposits() \
			<< ";withdrawals:" << getNbWithdrawals();
}

Account::Account( int initial_deposit ) {
	_nbAccounts += 1;
	_totalAmount += initial_deposit;
	this->_amount = initial_deposit;
	std::cout << "index:" << this->_accountIndex \
			<< ";amount:" << this->checkAmount() \
			<< ";created";
}

Account::~Account( void ) {
	_totalAmount -= this->_amount;
	_nbAccounts -= 1;
}

void	Account::makeDeposit( int deposit ) {
	int preAmount;
	preAmount = checkAmount();
	this->_nbDeposits += 1;
	this->_amount += deposit;
	_totalNbDeposits +=1 ;
	_totalAmount += deposit;

	std::cout <<"index:" << this->_accountIndex \
			<< ";p_amount:" << preAmount \
			<< ";deposit:" << deposit \
			<< ";amount:" << checkAmount() \
			<< ";nb_deposits:" << this->_nbDeposits;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	if (this->checkAmount() >= withdrawal) 
	{
		int preAmount;
		preAmount = checkAmount();
		this->_nbWithdrawals += 1;
		this->_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals += 1;

		std::cout <<"index:" << this->_accountIndex \
				<< ";p_amount:" << preAmount \
				<< ";withdrawal:" << withdrawal \
				<< ";amount:" << this->checkAmount() \
				<< ";nb_withdrawals:" << this->_nbWithdrawals;
		
		return true;
	}
	else
	{
		std::cout<<"index:" << this->_accountIndex \
				<< ";p_amount:" << this->checkAmount() \
				<< ";withdrawal:refused";

		return false;
	}
}

int		Account::checkAmount( void ) const {
	return this->_amount;
}

void	Account::displayStatus( void ) const  {
	std::cout << "index:" << this->_accountIndex \
			<< ";amount:" << this->_amount \
			<< ";deposits:" <<this->_nbDeposits \
			<< ";withdrawals:" <<this->_nbWithdrawals;
}