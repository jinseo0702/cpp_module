#ifndef PB_CLASS_CPP
#define PB_CLASS_CPP

#include "./ct_class.hpp"
#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>

using std::string;

namespace const_value
{
    enum
    {
        MAX_PAGE = 8
    };
}

class Phonebook
{
    private :
        Contact contact[const_value::MAX_PAGE];
        string command;
        string index;
        stringstream ssindex;
        int cnt;
        int idx;
    private :
        bool check_index(int index);
        bool check_ssindex(int &num);
        void clear_buf();
    public :
        Phonebook();
        void insert_command();
        void show_index_contact();
};

#endif