#include "../include/easyfind.hpp"

#include<vector>

int main(void)
{
    std::vector<int> V(4, 100);
    std::cout<<std::boolalpha<<easyfind(V, 100)<<std::endl;
    return (0);
}