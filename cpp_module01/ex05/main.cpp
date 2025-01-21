#include "Harl.hpp"

int main(void)
{
    Harl harl;
    std::string line;
    std::cout<<"insert complain : "<<std::flush;
    std::getline(std::cin, line);
    harl.complain(line);
}