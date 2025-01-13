#include "./pb_class.hpp"

void Phonebook::init_member()
{
    cnt = 0;
    idx = 0;
}

void Phonebook::insert_command()
{
    std::string command;

    getline(std::cin, command);
    if(command.compare("ADD") == 0, command.length() == 3)
    {
        contact[idx].init_arry();
        contact[idx].idx = idx;
        idx = cnt % 8;
        cnt += 1;
    }
    else if (command.compare("SEARCH") == 0, command.length() == 6)
    {
        /* code */
    }
    command.clear();
}

void Phonebook::show_index_contact()
{
    if (cnt > 8)
}