#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iterator>
#include <deque>
#include <stack>
#include <stdexcept>
#include <iostream>
#include <string>

template <typename T>
class MutantStack
{
private:
    std::stack<T> S;
public:
    MutantStack();
    MutantStack(const MutantStack &obj);
    MutantStack<T> &operator=(const MutantStack &obj);
    bool empty() const;
    typename std::stack<T>::size_type size() const;
    T& top();
    void push (const T& val);
    void pop();z
    ~MutantStack() {};
};
#include "../src/MutantStack.tpp"

template <typename T>
MutantStack<T>::MutantStack()
{
}
template <typename T>
MutantStack<T>::MutantStack(const MutantStack &obj)
{
    this->S(obj.S);
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &obj)
{
    if (this != &obj)
    {
        this->S = obj.S;
    }
    return (*this)
}

template <typename T>
bool MutantStack<T>::empty() const
{
    return (this->S.empty());
}

template <typename T>
typename std::stack<T>::size_type MutantStack<T>::size() const
{
    return (this->S.size());
}

template <typename T>
T& MutantStack<T>::top()
{
    return (this->S.top());
}

template <typename T>
void MutantStack<T>::push (const T& val)
{
    return (this->S.push(val));
}

template <typename T>
void MutantStack<T>::pop()
{
    return (this->S.pop(););
}

#endif