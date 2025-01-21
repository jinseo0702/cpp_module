#include "./main.hpp"
#include "./Info.hpp"

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        std::cout<<"check parameter !"<<std::endl;
        return (0);
    }
    Info ma(argv[1], argv[2], argv[3]);
    if (ma.file_is_good() == false)
        return (0);
    ma.read_ori();
    return (0);
}