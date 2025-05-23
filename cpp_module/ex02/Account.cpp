#include "./Account.hpp"
#include <iostream>
#include <ctime>

using std::cout;
using std::endl;
using std::flush;
int Account::t::_nbAccounts = 0;
int Account::t::_totalAmount = 0;
int Account::t::_totalNbDeposits = 0;
int Account::t::_totalNbWithdrawals = 0;

void Account::t::_displayTimestamp( void )
{
    time_t timer;
    int year;
    int mon;
    int day;
    int hour;
    int min;
    int sec;

    timer = time(NULL);
    struct tm *time = localtime(&timer);
    year = time->tm_year + 1900;
    mon = time->tm_mon + 1;
    day = time->tm_mday;
    hour = time->tm_hour;
    min = time->tm_min;
    sec = time->tm_sec;

    cout<<"["<<flush;
    cout<<year<<flush;
    cout<<mon<<flush;
    cout<<day<<flush;
    cout<<"_"<<flush;
    cout<<hour<<flush;
    cout<<min<<flush;
    cout<<sec<<flush;
    cout<<"] "<<flush;
}

void Account::t::displayAccountsInfos(void)
{
    _displayTimestamp();
    cout<<"accounts:"<<_nbAccounts<<";"<<flush;
    cout<<"total:"<<_totalAmount<<";"<<flush;
    cout<<"deposits:"<<_totalNbDeposits<<";"<<flush;
    cout<<"withdrawals:"<<_totalNbWithdrawals<<endl<<endl;
}

void Account::t::displayStatus(void) const
{
    _displayTimestamp();
    cout<<"index:"<<_accountIndex<<";"<<flush;
    cout<<"amount:"<<_amount<<";"<<flush;
    cout<<"deposits:"<<_nbDeposits<<";"<<flush;
    cout<<"withdrawals:"<<_nbWithdrawals<<endl;
}

Account::t::Account( int initial_deposit )
{
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _nbAccounts++;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    cout<<"index:"<<_accountIndex<<";"<<"amount:"<<_amount<<";"<<"created"<<endl;
}

Account::t::Account( void )
{
}

int Account::t::checkAmount( void ) const
{
    return (_amount);
}

void Account::t::makeDeposit(int deposit)
{
    _displayTimestamp();
    cout<<"index:"<<_accountIndex<<";"<<flush;
    cout<<"p_amount:"<<checkAmount()<<";"<<flush;
    cout<<"deposit:"<<deposit<<";"<<flush;
    _amount += deposit;
    cout<<"amount:"<<checkAmount()<<";"<<flush;
    cout<<"nb_deposits:"<<++_nbDeposits<<endl;
    _totalNbDeposits += _nbDeposits;
    _totalAmount += deposit;
}

bool Account::t::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    cout<<"index:"<<_accountIndex<<";"<<flush;
    cout<<"p_amount:"<<checkAmount()<<";"<<flush;
    if (_amount - withdrawal < 0)
    {
        cout<<"withdrawal:refused"<<endl;
        return (false);
    }
    cout<<"withdrawal:"<<withdrawal<<";"<<flush;
    _amount -= withdrawal;
    cout<<"amount:"<<checkAmount()<<";"<<flush;
    cout<<"nb_withdrawals:"<<++_nbWithdrawals<<endl;
    _totalNbWithdrawals += _nbWithdrawals;
    _totalAmount -= withdrawal;
    return (true);
}

Account::t::~Account(void)
{
    _displayTimestamp();
    cout<<"index:"<<_accountIndex<<";"<<"amount:"<<_amount<<";"<<"closed"<<endl;
}

int Account::t::getNbAccounts(void)
{
    return (_nbAccounts);
}

int Account::t::getTotalAmount(void)
{
    return (_totalAmount);
}

int Account::t::getNbDeposits(void)
{
    return (_totalNbDeposits);
}

int Account::t::getNbWithdrawals(void)
{
    return (_totalNbWithdrawals);
}