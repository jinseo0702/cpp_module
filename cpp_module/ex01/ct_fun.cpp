#include "./ct_class.hpp"

Contact::Contact()
{
    idx = -1;
}

void Contact::insert_eof(string &str)
{
    if(!getline(cin, str, '\n'))
    {
        if(cin.eof())
        {
            cout<<"\nexit"<<endl;
            exit(1);
        }
    }
}

bool Contact::check_empty(string str)
{
    if(str.find_first_not_of(" \f\n\r\t\v") == std::string::npos)
    {
        cout<<"empty try again : "<<flush;
        return (false);
    }
    else if(str.length() == 0)
    {
        cout<<"empty try again : "<<flush;
        return (false);
    }
    return (true);
}

void Contact::loop_insert(string &str)
{
    insert_eof(str);
    while (check_empty(str) == false)
        insert_eof(str);
}

void Contact::init_arry()
{
    cout<<"insert first name : "<<flush;
    loop_insert(first_name);
    cout<<"insert last name : "<<flush;
    loop_insert(last_name);
    cout<<"insert nick name : "<<flush;
    loop_insert(nick_name);
    cout<<"insert phonenumber : "<<flush;
    loop_insert(phone_number);
    cout<<"insert darkest_secret : "<<flush;
    loop_insert(darkest_secret);
}

void Contact::print_index()
{
    cout<<"first name is : "<<first_name<<endl;
    cout<<"last name is : "<<last_name<<endl;
    cout<<"nick name is : "<<nick_name<<endl;
    cout<<"phone number is : "<<phone_number<<endl;
    cout<<"darkest secret is : "<<darkest_secret<<endl;
}

void Contact::print_contact()
{
    cout<<"         "<<idx<<"|"<<Contact::check(first_name)<<"|"<<Contact::check(last_name)<<"|"<<Contact::check(nick_name)<<endl;
}

string Contact::check(string str)
{
    string temp;
    if (str.length() > 10)
    {
        temp = str.substr(0, 9);
        temp.push_back('.');
    }
    else
        temp = str;
    if (temp.length() < 10)
        temp.insert(0, 10 - str.length(), ' ');
    return (temp);
}
