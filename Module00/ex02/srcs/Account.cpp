#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::~Account() {
	_displayTimestamp();
	std::cout << " index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";closed\n";
};

Account::Account(int initial_deposit) {
	_displayTimestamp();
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbAccounts += 1;
	_totalAmount += _amount;
	std::cout << " index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";created\n";
};

void Account::_displayTimestamp(void) {
	time_t timer;
	timer = time(NULL);
	struct tm* t = localtime(&timer);
	std::cout << "[";
	std::cout << t->tm_year + 1900 - 2000;
	std::cout << std::setfill('0') << std::setw(2) << t->tm_mon + 1;
	std::cout << std::setfill('0') << std::setw(2) << t->tm_mday << "_";
	std::cout << std::setfill('0') << std::setw(2) << t->tm_hour;
	std::cout << std::setfill('0') << std::setw(2) << t->tm_min;
	std::cout << std::setfill('0') << std::setw(2) << t->tm_sec;
	std::cout << "]";
};

int Account::getNbAccounts(void) {
	return _nbAccounts;
};

int	Account::getTotalAmount(void) {
	return _totalAmount;
};

int	Account::getNbDeposits(void) {
	return _totalNbDeposits;
};

int	Account::getNbWithdrawals(void) {
	return _totalNbWithdrawals;
};

void Account::displayAccountsInfos(void) {
	_displayTimestamp();
	std::cout << " accounts:" << getNbAccounts();
	std::cout << ";total:" << getTotalAmount();
	std::cout << ";deposits:" << getNbDeposits();
	std::cout << ";withdrawals:" << getNbWithdrawals() << "\n";
};

void Account::makeDeposit(int deposit) {
	_displayTimestamp();
	std::cout << " index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount;
	std::cout << ";deposit:" << deposit;
	_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits += 1;
	_nbDeposits += 1;
	std::cout << ";amount:" << _amount;
	std::cout << ";nb_deposits:" << _nbDeposits << "\n";
};

bool Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();
	std::cout << " index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount;
	std::cout << ";withdrawal:";
	if (withdrawal > _amount) {
		std::cout<< "refused\n";
		return (false);
	}
	else {
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals += 1;
		_totalNbWithdrawals += 1;
		std::cout << withdrawal;
		std::cout << ";amount:" << _amount;
		std::cout << ";nb_withdrawals:" << _nbWithdrawals << "\n";
		return (true);
	}
};

int Account::checkAmount(void) const {
	return _amount;
};

void Account::displayStatus(void) const {
	_displayTimestamp();
	std::cout << " index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits;
	std::cout << ";withdrawals:" << _nbWithdrawals << "\n";
};
