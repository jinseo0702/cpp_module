#include "./ScavTrap.hpp"
#include <iostream>
#include <string>
//test file
int main(void)
{
    /*
    int cnt = 0;
    std::string name;
    std::cout<<"insert name : "<<std::flush;
    std::cin>>name;
    ScavTrap c_t(name);
    std::string cmd;
    std::string target;
    std::cin.ignore();
    while (true)
    {
        std::cout<<"insert command : "<<std::flush;
        getline(std::cin, cmd);
        if (cnt > 0)
            std::cin.ignore();
        std::cout<<"\ncmd is : "<<cmd<<std::endl;
        if (cmd == "Attack")
        {
            std::cout<<"insert target : "<<std::flush;
            getline(std::cin, target);
            c_t.attack(target);
        }
        else if(cmd == "takeDamage")
        {
            unsigned int dam;
            std::cout<<"insert Damage : "<<std::flush;
            std::cin>>dam;
            c_t.takeDamage(dam);
        }
        else if(cmd == "beRepaired")
        {
            unsigned int re;
            std::cout<<"insert Repaired point : "<<std::flush;
            std::cin>>re;
            c_t.beRepaired(re);
        }
        else if(cmd == "guardGate")
        {
            c_t.guardGate();
        }
        else if (std::cin.eof())
        {
            std::cout<<"\nexit !"<<std::endl;
            return(1);
        }
        else
        {
            std::cout<<"not correct"<<std::endl;
        }
        cnt++;
    }*/
    ScavTrap temp2();
    ClapTrap *temp = &temp2;
    temp->attack("anamy");
    delete temp;
    return (0);
}