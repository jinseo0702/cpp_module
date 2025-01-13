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
        cnt += 1;
        idx = cnt % 8;
    }
    else if (command.compare("SEARCH") == 0, command.length() == 6)
    {
        for (size_t i = 0; i < cnt; i++)
        {
            cout<<"cnt is "<<cnt<<"idx is "<<idx<<"i is "<<i<<endl;
            contact[i].print_contact();
        }
    }
   else if (command.compare("EXIT") == 0, command.length() == 4)
   {
        exit(0);
   }
    command.clear();
}

// void Phonebook::show_index_contact()
// {
//     if (cnt > 8)
// }