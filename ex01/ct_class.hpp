#ifndef CT_CLASS_HPP
# define CT_CLASS_HPP

#include <string>
#include <iostream>
using namespace std;

class Contact
{
    private :
        string first_name;
        string last_name;
        string nick_name;
        string phone_number;
        string darkest_secret;
    public :
        int idx;
        void init_arry();
}

#endif

/*first name, last name, nickname, phone number and darkest secret.*/ ;