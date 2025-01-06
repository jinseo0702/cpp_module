#include <iostream>

namespace bestcom1
{
    void simplefunc(void)
    {
        std::cout<<"1이 정의한 함수"<<std::endl;        
    }
}

namespace bestcom2
{
    void simplefunc(void)
    {
        std::cout<<"2이 정의한 함수"<<std::endl;        
    }
}

int main(void)
{
    bestcom1::simplefunc();
    bestcom2::simplefunc();
    return (0);
}