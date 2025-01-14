#include "./pb_class.hpp"

Phonebook::Phonebook()
{
    cnt = 0;
    idx = 0;
    ssindex.clear();
    ssindex.str("");
}

void Phonebook::insert_command()
{
    getline(cin, command);
    if(command.compare("ADD") == 0 && command.length() == 3)
    {
        contact[idx].init_arry();
        contact[idx].idx = idx;
        cnt += 1;
        idx = cnt % 8;
    }
    else if (command.compare("SEARCH") == 0 && command.length() == 6)
    {
        for (size_t i = 0; i < const_value::MAX_PAGE; i++)
        {
            if (contact[i].idx == -1)
                break;
            contact[i].print_contact();
        }
        cout<<"select index number : ";
        getline(cin, index);
        if (cin.eof())
        {
            cout<<"\nexit"<<endl;
            exit(1);
        }
        ssindex.str(index);
        int num = 0;
        if(check_ssindex(num) == false)
        {
            clear_buf();
            return ;
        }
        if(check_index(num) == false)
        {
            clear_buf();
            return ;
        }
        contact[num].print_index();
    }
   else if (command.compare("EXIT") == 0 && command.length() == 4)
   {
        exit(0);
   }
    cout.flush();
    command.clear();
}

void Phonebook::clear_buf()
{
    cout<<"failed index"<<endl;
    command.clear();
    index.clear();
    ssindex.clear();
    ssindex.str("");
}

bool Phonebook::check_ssindex(int &num)
{
    ssindex >> num;
    if(ssindex.fail())
        return (false);
    string str;
    if(ssindex >>str)
        return (false);
    return (true);
}

bool Phonebook::check_index(int idx)
{
    if (idx < 0 || idx > 7)
    {
        cout<<"Exceeded valid range"<<endl;
        return (false);
    }
    return (true);
}