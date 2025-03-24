#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "./Array.hpp"

template<typename T>
Array<T>::Array()
{
    this->arr = new T[0];
    this->arr[0] = 0;
    this->len = 0;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
    this->arr = new T[n];
    this->len = n;
    for(size_t i = 0; i < n; i++)
        this->arr[i] = 0;
}

template<typename T>
Array<T>::Array(const Array &obj)
{
    this->arr = new T[n];
    this->len = obj.size();
    for(size_t i = 0; i < this->len; i++)
        this->arr[i] = obj.arr[i];
}

template<typename T>
Array<T> &Array<T>::operator=(const Array<T> &obj)
{
    if(this != &obj)
    {
        delete[] this->arr;
        this->arr = new T[n];
        this->len = obj.size();
        for(size_t i = 0; i < this->len; i++)
            this->arr[i] = obj.arr[i];
    }
    return(*this);
}

#endif