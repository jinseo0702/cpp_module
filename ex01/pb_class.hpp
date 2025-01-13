#ifndef PB_CLASS_CPP
#define PB_CLASS_CPP

#include "./ct_class.hpp"
#include <iostream>
#include <string>

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
        int cnt;
        int idx;
    public :
        void init_member();
        void insert_command();
        void show_index_contact();
};

#endif