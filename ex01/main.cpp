#include "./pb_class.hpp"

int main(void)
{
    Phonebook phonebook;
    string com;
    phonebook.init_member();
    while (1)
    {
        phonebook.insert_command();
    }
    return (0);
}