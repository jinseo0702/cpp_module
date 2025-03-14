#include "../include/Serializer.hpp"



int main(void)
{
    Data val;

    val.value = 100;
    val.address = &(val.value);
    
    uintptr_t uni = Serializer::serialize(&val);
    std::cout << uni <<" Hex is 0x" << std::hex << uni <<std::endl;
    Data *ptr = Serializer::deserialize(uni);
    std::cout << "Original Data Structure : " << val.address << " "<< val.value <<std::endl;
    std::cout << "After Casting data to uintptr_t to data : " << ptr->address << " "<< ptr->value <<std::endl;

    return (0);
}
