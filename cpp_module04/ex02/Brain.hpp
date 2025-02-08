#ifndef BRAIN_HPP
#define BRAIN_HPP

#include<string>
#include<iostream>

class Brain
{
private:
    std::string idea[100];
public:
    Brain();
    Brain(const Brain& others);
    Brain& operator=(const Brain& others);
    virtual ~Brain();
};

#endif