#include <cstdlib>
#include <string>
#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
    srand(getpid());
    int i = 10;
    while (--i)
    {
        cout << rand() <<"\n";
    }
    return 0;
}