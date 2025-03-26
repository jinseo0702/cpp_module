#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <stdexcept>
#include <vector>
#include <algorithm>

class Span
{
private:
    std::vector<int> V;
    long idx;
    Span();
public:
    Span(unsigned int N);
    Span(const Span &obj);
    Span &operator=(const Span &obj);
    ~Span();
    void addNumber(int num);
    void addNumbers(int num, unsigned int rpt);
    long shortestSpan(void);
    long longestSpan(void);
};

#endif