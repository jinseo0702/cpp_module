#include <iostream>
#include <cstdint>

using namespace std;

int main(void)
{
    int *a = NULL;
    int *ptr = a;
    uintptr_t b = reinterpret_cast<uintptr_t>(ptr);
    int *ptr2 = reinterpret_cast<int *>(b);
    cout << *ptr2 << endl;
    return (0);
}