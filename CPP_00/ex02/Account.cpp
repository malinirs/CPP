#include "Account.hpp"
#include <iostream>
#include <ctime>

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

Account::Account ( void )
{
	_accountIndex = 0;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
}

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_totalAmount = _totalAmount + _amount;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
	_nbAccounts--;
}

int	Account::getNbAccounts( void )
{
	return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return _totalAmount;
}

int	Account::getNbDeposits( void )
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ) /** вывести инф по счетам */
{
	_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";total:" <<
	getTotalAmount() << ";deposits:" << getNbDeposits() <<
	";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit(int deposit) /** сделать депозит */
{
	_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ";p_amount:" <<
	_amount << ";deposit:" << deposit;
	_totalAmount = Account::_totalAmount + deposit;
	_totalNbDeposits++;
	_amount = Account::_amount + deposit;
	_nbDeposits++;
	std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal) /** снять сумму */
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
	if (withdrawal > _amount)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	_totalAmount = _totalAmount - withdrawal;
	_totalNbWithdrawals++;
	_amount = _amount - withdrawal;
	_nbWithdrawals++;
	std::cout << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}

int	Account::checkAmount( void ) const
{
	return _amount;
}

void	Account::displayStatus( void ) const /** вывести статус */
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" <<
			  _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void)
{
	struct tm	*time_local;
	time_t		hour;
	char		str[150];

	time(&hour); /** time ret кол-вопрошедших часов с 1970 */
	time_local = localtime(&hour); /** получили локальное время */
	strftime(str, 150, "[%Y%m%d_%H%M%S] ", time_local); /** перевод в текстовую строку */
	std::cout << str;
}
