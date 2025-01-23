#include <iostream>
#include <cmath>
#include <bitset>

void showBits() {
    float f = 42.42f;
    int i = roundf(f * 256);
    std::cout << "i  : " << i << std::endl;
    std::cout << "int  : " << std::bitset<32>(i) << std::endl;
    float j = (float)i / 256;
    
    std::cout << "float: " << std::bitset<32>(*(int*)&f) << std::endl;
    std::cout << "f: " << f << std::endl;
    std::cout << "j: " << std::bitset<32>(j) << std::endl;
    std::cout << "j: " << j << std::endl;
}

int main() {
    showBits();
    return 0;
}