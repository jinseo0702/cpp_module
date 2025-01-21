#ifndef HARl_HPP
#define HARl_HPP

#include<iostream>
#include<string>

class Harl
{
private:
    std::string insert[4];
    bool flag;
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    void check_line(void);
public:
    void (Harl::*compare[4])(void);
public:
    Harl(void);
    ~Harl(void);
    void complain(std::string level);
};

#endif