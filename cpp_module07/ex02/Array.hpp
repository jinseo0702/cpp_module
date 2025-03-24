#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>
#include <iostream>

template<typename T>
class Array
{
private:
    T *arr;
    long len;
public:
    Array();
    Array(unsigned int n);//0으로 초기화 되어야한다.
    Array(const Array<T> &obj);
    Array<T> &operator=(const Array<T> &obj);
    ~Array() { delete[] this->arr; };
    long size() const { return (this->len);};
    T &operator[](unsigned int idx);
};
#include "./Array.tpp"

#endif