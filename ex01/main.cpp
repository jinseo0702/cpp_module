#include "./pb_class.hpp"

int main(void)
{
    Phonebook phonebook;
    string com;
    while (1)
    {
        cout<<"insert command : ";
        phonebook.insert_command();
        if (cin.eof())
        {
            cout<<"\nexit !"<<endl;
            exit(1);
        }
        cout.flush();
    }
    return (0);
}