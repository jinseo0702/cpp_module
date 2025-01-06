#include <iostream>

using namespace std;

namespace AAA
{
    namespace BBB
    {
        namespace ccc
        {
            int num1;
            int num2;
        } // namespace ccc
        
    } // namespace BBB
    
} // namespace AAA


int main(void)
{
    AAA::BBB::ccc::num1 = 20;
    AAA::BBB::ccc::num2 = 30;

    namespace ABC = AAA::BBB::ccc;
    cout<<ABC::num1<<endl;
    cout<<ABC::num2<<endl;
    return (0);
}