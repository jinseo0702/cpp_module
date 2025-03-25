#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main(void)
{
    vector<int> V(4, 100);
    cout<<*find(V.begin(), V.end(), 10)<<"\n";
}