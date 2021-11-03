#include "Account.hpp"
#include <iostream>
#include <chrono>

void Account::_displayTimestamp( void )
{
	std::chrono::system_clock::time_point time = std::chrono::system_clock::now();
	std::time_t tt;

	tt = std::chrono::system_clock::to_time_t(time);
	std::cout << "[" << ctime(&tt) << "] ";
}

Account::Account(int initial_deposit)
	: _amount(initial_deposit), _accountIndex(_nbAccounts)
{
	_nbAccounts++;
	_totalAmount += _amount;
	return;
}

Account::~Account()
{
	return;
}

int Account::getNbAccounts( void )
{
	return _nbAccounts;
}

int Account::getTotalAmount( void )
{
	return _totalAmount;
}

int Account::getNbDeposits( void )
{
	return _totalNbDeposits;
}

void Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

