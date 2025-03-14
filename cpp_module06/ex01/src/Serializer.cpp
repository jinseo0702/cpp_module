#include "../include/Serializer.hpp"

Serializer::Serializer(/* args */)
{}

Serializer::Serializer(const Serializer& other)
{
    (void)other;
}

Serializer &Serializer::operator=(const Serializer& other)
{
    (void)other;
    return (*this);
}

Serializer::~Serializer()
{}

uintptr_t Serializer::serialize(Data* ptr)
{
    uintptr_t cg_type;

    cg_type = reinterpret_cast<uintptr_t>(ptr);
    return (cg_type);
}
Data* Serializer::deserialize(uintptr_t raw)
{
    Data *ptr;
    ptr = reinterpret_cast<Data*>(raw);
    return (ptr);
}
