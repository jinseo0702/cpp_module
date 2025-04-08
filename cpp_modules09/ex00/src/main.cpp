#include "../include/BitcoinExchange.hpp"

int main(int argc, char *argv[])
{
    (void)argv;
    if (argc != 2)
    {
        std::cerr<<"Error: could not open file."<<std::endl;
        return (1);
    }
    BitcoinExchange bit("./doc/data.csv");
    bit.to_evaluate(argv[1]);
    return (0);
}