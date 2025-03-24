#include "./iter.hpp"

bool what_happen(int *arr, int size)
{
    if (!arr)
        return (false);
    for (int i = 0; i < size; i++)
        arr[i] = 10;
    return (true);
}

int main(void)
{
    int arr[100];
    int size = 100;
    iter(arr, size, what_happen);
    for (int i = 0; i < size; i++)
        std::cout<<arr[i]<<" ,";
    std::cout<<"\nfinish!!!"<<std::endl;
    return (0);
}