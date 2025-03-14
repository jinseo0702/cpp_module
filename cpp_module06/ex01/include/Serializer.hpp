#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <stdint.h>
#include "./Struct.hpp"

class Serializer
{
private:
    Serializer(/* args */);
    Serializer(const Serializer& other);
    Serializer &operator=(const Serializer& other);
    ~Serializer();
public:
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);

};


#endif

