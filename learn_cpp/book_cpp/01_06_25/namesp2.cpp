#include <iostream>

namespace bcom1
{
    void simfun(void);   
}

namespace bcom2
{
    void simfun(void);   
}

int main(void)
{
    bcom1::simfun();
    bcom2::simfun();
    return (0);
}

namespace bcom1
{
    void simfun(void)
    {
        std::cout<<"1이 정의한 함수"<<std::endl;        
    }
}

namespace bcom2
{
    void simfun(void)
    {
        std::cout<<"2이 정의한 함수"<<std::endl;        
    }
}