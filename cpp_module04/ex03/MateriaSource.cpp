#include "./MateriaSource.hpp"

MateriaSource::MateriaSource() : idx(0)
{
    std::cout<<"MateriaSource Make default constructor non name 1 option"<<std::endl;
    std::cout<<"MateriaSource addr is :"<<this<<std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& other) : idx(other.idx)
{
    for (size_t i = 0; i < 4; i++)
    {
        this->table[i] = other.table[i];
    }
    std::cout<<"MateriaSource Make copy constructor name 2 option"<<std::endl;
    std::cout<<"MateriaSource addr is :"<<this<<std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource& other)
{
    if (this != &other)
    {
        for (size_t i = 0; i < 4; i++)
        {
            this->table[i] = other.table[i];
        }
        this->idx = other.idx;
    }
    std::cout<<"MateriaSource Make Assignment operator constructor name 3 option"<<std::endl;
    std::cout<<"MateriaSource addr is :"<<this<<std::endl;
    return (*this);
}

MateriaSource::~MateriaSource()
{
    for (size_t i = 0; i < 4; i++)
    {
        if(this->table[i].get_key() != NULL)
        {
            delete this->table[i].get_key();
            this->table[i].set_key(NULL);
        }
    }
    std::cout<<"MateriaSource Destructor"<<std::endl;
    std::cout<<"MateriaSource addr is :"<<this<<std::endl;
}

void MateriaSource::learnMateria(AMateria* other)
{//very high leak possibility
    if (idx == 4)
    {
        std::cout<<"Inventroy is Full!"<<std::endl;
        return ;
    }
    table[idx].set_key(other->clone());
    delete other;
    other = NULL;
    idx++;
}

AMateria *MateriaSource::createMateria(std::string const & type)
{
    for (size_t i = 0; i < 4; i++)
    {
        if (table[i].get_key() == NULL)
            break ;
        if(type.compare(table[i].get_key()->getType()) == 0)
            return (table[i].get_key());
    }
    std::cout<<"Materia type is Wrong!!!! Check again : "<<type<<std::endl;
    return (NULL);
}