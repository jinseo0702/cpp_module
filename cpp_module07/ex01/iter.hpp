#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T,  typename T2, typename T3>
void iter(T *arr, T2 size, T3 (*func)(T*, T2))
{
    if(func(arr, size))
    {
        std::cout<<"What happend?"<<std::endl;
    }
}

#endif