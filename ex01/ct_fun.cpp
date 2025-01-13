#include "./ct_class.hpp"

void Contact::init_arry()
{
    cout<<"insert first name : ";
    getline(cin, first_name, '\n');
    cout<<"insert last name : ";
    getline(cin, last_name, '\n');
    cout<<"insert nick name : ";
    getline(cin, nick_name, '\n');
    cout<<"insert phonenumber : ";
    getline(cin, phone_number, '\n');
    cout<<"insert darkest_secret : ";
    getline(cin, darkest_secret, '\n');
}