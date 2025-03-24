#include "../include/total.hpp"

Base * generate(void)
{
    // 0 ~ 2
    int random = getpid();
    random %= 3;
    switch (random)
    {
        case 0:
            return (new A());
        case 1:
            return (new B());
        case 2:
            return (new C());
    }
    return (NULL);
}

void identify(Base* p)
{
    std::cout<<"identify pointer!"<<std::endl;
    Base *show;

    show = dynamic_cast<A*>(p);
    if (show)
    {
        std::cout<<"Class type : A"<<std::endl;
        return ;
    }
    show = dynamic_cast<B*>(p);
    if (show)
    {
        std::cout<<"Class type : B"<<std::endl;
        return ;
    }
    show = dynamic_cast<C*>(p);
    if (show)
    {
        std::cout<<"Class type : C"<<std::endl;
        return ;
    }
    std::cout<<"Runtime Error!!"<<std::endl;
}

void identify(Base& p)
{
    try
    {
        std::cout<<"identify reference!"<<std::endl;
        Base show;
        show = dynamic_cast<A&>(p);
        std::cout<<"Class type : A"<<std::endl;
    }
    catch(const std::exception& e)
    {
        try
        {
            Base show;
            show = dynamic_cast<B&>(p);
            std::cout<<"Class type : B"<<std::endl;        
        }
        catch(const std::exception& e)
        {
            try
            {
                Base show;
                show = dynamic_cast<C&>(p);
                std::cout<<"Class type : C"<<std::endl;
            }
            catch(const std::exception& e)
            {
                std::cout<<"Runtime Error!!"<<  e.what() <<std::endl;
            }
        }
    }
}