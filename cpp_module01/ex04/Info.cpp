#include "Info.hpp"

Info::Info(char *filename, char *s1, char *s2)
{
    this->name.assign(filename);
    this->s1.assign(s1);
    this->s2.assign(s2);
    this->fs.open(this->name.c_str(), std::fstream::in);
    this->flag = true;
    if (this->fs.is_open() == true)
    {
        this->fs2.open(this->name.insert(this->name.length(), ".replace").c_str(), std::fstream::out | std::fstream::trunc);
    }
    else
    {
        this->flag = false;
        std::cout<<"Error!! open fail"<<std::endl;
    }
}

Info::~Info(void)
{
    if (this->flag == true)
    {
        std::cout<<"file close"<<std::endl;
        this->fs.close();
        this->fs2.close();
    }
}

bool Info::file_is_good(void)
{
    return (this->flag);
}

void Info::read_ori(void)
{
    std::string temp;
    bool cnt = false;
    while (std::getline(this->fs, temp))
    {
        std::size_t found = 0;
        while (true)
        {
            found = temp.find(s1, found);
            if (found == temp.npos)
                break;
            temp.erase(found, s1.length());
            temp.insert(found, s2);
            found += s1.length();
            cnt = true;
        }
        this->fs2<<temp.c_str()<<std::endl;
    }
    if (cnt == true)
        std::cout<<"replace s1 to s2"<<std::endl;
    else
        std::cout<<"not replace"<<std::endl;
}



