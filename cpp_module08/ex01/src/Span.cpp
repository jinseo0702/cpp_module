#include "../include/Span.hpp"

Span::Span()
{}

Span::Span(unsigned int N) : V(N, 0), idx(0)
{
}

Span::Span(const Span &obj) : V(obj.V), idx(0)
{
}

Span &Span::operator=(const Span &obj)
{
    if (this != &obj)
    {
        this->V = obj.V;
        this->idx = 0;
    }
    return (*this);
}

Span::~Span()
{

}

void Span::addNumber(int num)
{
    if (this->idx >= static_cast<long>(this->V.size()))
        throw std::out_of_range("Out of range!!! Check again");
    this->V[this->idx] = num;
    this->idx++;
}

void Span::addNumbers(int num, unsigned int rpt)
{
    if (this->idx + (rpt - 1) >= static_cast<long>(this->V.size()))
        throw std::out_of_range("Out of range!!! Check again");
    for (long i = 0; i < rpt; i++)
    {
        this->V[this->idx] = num;
            this->idx++;
    }
}


long Span::shortestSpan(void)
{
    if(this->V.size() <= 1)
        throw std::logic_error("Check idx!!!! size is Fail!");
    std::vector<int>::iterator itb = this->V.begin();
    std::vector<int>::iterator itd = this->V.end();
    std::sort(itb, itd);
    long answer = 0;
    for (std::vector<int>::iterator it = this->V.begin(); it != this->V.end() - 1; it++)
    {
        if (it == V.begin())
            answer = (*(it + 1) - *it);
        if ((*(it + 1) - *it) < answer)
            answer = (*(it + 1) - *it);
        // std::cout<<answer<<"   "<<(*(it + 1) - *it)<<" Hello Shorts\n "<<std::endl;
    }
    return (answer);
}

long Span::longestSpan(void)
{
    if(this->V.size() <= 1)
        throw std::logic_error("Check idx!!!! size is Fail!");
    std::vector<int>::iterator itb = this->V.begin();
    std::vector<int>::iterator itd = this->V.end();
    std::sort(itb, itd);
    long answer = *(itd -1) - *itb;
    return (answer);
}
