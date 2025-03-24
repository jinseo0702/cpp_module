#ifndef ARRAY_HPP
#define ARRAY_HPP

template<typename T>
class Array
{
private:
    T *arr;
    size_t len;
public:
    Array();
    Array(unsigned int n);//0으로 초기화 되어야한다.
    Array(const Array<T> &obj);
    Array<T> &operator=(const Array<T> &obj);
    ~Array();
    size_t size() { return (this->len)};
};
#include "./Array.tpp"

#endif