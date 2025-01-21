#include <iostream>
#include "./Harl.hpp"

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cout<<"check parameter num!"<<std::endl;
        return (0);
    }
    std::string line(argv[1]);
    Harl harl;
    harl.complain(line);
    return (0);
}