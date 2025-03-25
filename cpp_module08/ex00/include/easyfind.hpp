#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include<iterator>
#include<iostream>

template <typename T>
bool easyfind(T &t, int obj)
{
    typename T::iterator it = t.begin();
    while (it != t.end())
    {
        if (*it == obj)
            return (true);
        it++;
    }
    return (false);
}


#endif