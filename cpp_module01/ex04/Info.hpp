#ifndef INFO_H
#define INFO_H

#include <fstream>
#include <iostream>
#include <string>

class Info
{
private:
    std::fstream fs;
    std::fstream fs2;
    std::string name;
    std::string s1;
    std::string s2;
    bool flag;
public:
    Info(char *filename, char *s1, char *s2);
    ~Info(void);
    bool file_is_good(void);
    void read_ori(void);
};

#endif