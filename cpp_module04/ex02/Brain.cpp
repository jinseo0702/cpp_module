#include "./Brain.hpp"

Brain::Brain()
{
    std::cout<<"Constructors Make Brain Class defalt"<<std::endl;
    std::cout<<"Adr is : "<<this<<std::endl;
}

Brain::Brain(const Brain &others)
{
    *this = others;
    std::cout<<"Constructors Make Brain Class copy"<<std::endl;
    std::cout<<"Adr is : "<<this<<std::endl;
}

Brain &Brain::operator=(const Brain& others)
{
    if (this != &others)
    {
        for (size_t i = 0; i < 100; i++)
        {
            this->idea[i] = others.idea[i];
        }
    }
    std::cout<<"Constructors Make Brain Class operator = "<<std::endl;
    std::cout<<"Adr is : "<<this<<std::endl;
    return(*this);
}

Brain::~Brain()
{
    std::cout<<"Destructors Make Brain Class"<<std::endl;
    std::cout<<"Adr is : "<<this<<std::endl;
}