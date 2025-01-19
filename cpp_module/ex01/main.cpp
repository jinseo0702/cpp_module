#include "./pb_class.hpp"

int main(void)
{
    Phonebook phonebook;
    string com;
    while (1)
    {
        cout<<"insert command : "<<flush;
        phonebook.insert_command();
        if (cin.eof())
        {
            cout<<"\nexit !"<<endl;
            exit(1);
        }
    }
    return (0);
}