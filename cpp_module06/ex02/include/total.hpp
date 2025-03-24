#ifndef TOTAL_HPP
#define TOTAL_HPP

#include "./Base.hpp"
#include "./A.hpp"
#include "./B.hpp"
#include "./C.hpp"

#include <sys/types.h>
#include <unistd.h>
#include <iostream>
#include <typeinfo>

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif