#include <iostream>

namespace hybrid
{
    void hybfunc(void)
    {
        std::cout<<"Hello World!"<<std::endl;
        std::cout<<"Hello my friends!"<<std::endl;
    }
} // namespace hybrid

int main(void)
{
    using hybrid::hybfunc;
    hybfunc();
    return (0);
}