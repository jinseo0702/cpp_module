#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
    if (argc == 1)
        cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    else if(argc > 1)
    {
        string str;
        int idx = 0;
        while (argv[++idx])
            str.append(argv[idx]);
        for (size_t i = 0; i < str.size(); i++)
            str[i] = toupper(str[i]);
        cout<<str<<'\n';
    }
    s
    return (0);
}