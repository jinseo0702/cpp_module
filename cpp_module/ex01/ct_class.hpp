#ifndef CT_CLASS_HPP
# define CT_CLASS_HPP

#include <string>
#include <iostream>
#include <cstdlib>
using namespace std;

class Contact
{
    private :
        string first_name;
        string last_name;
        string nick_name;
        string phone_number;
        string darkest_secret;
    private :
        void insert_eof(string &str);
        bool check_empty(string str);
        void loop_insert(string &str);
    public :
        Contact();
        int idx;
        void init_arry();
        void print_contact();
        void print_index();
        string check(string str); 
};

#endif
