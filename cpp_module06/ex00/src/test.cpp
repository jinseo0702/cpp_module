#include <cctype>
#include <string>
#include <sstream>
#include <cmath>
#include <limits>
#include <iostream>
#include <exception>
using namespace std;

int main(int argc, char **argv)
{
	// string str(argv[1]);
	// stringstream ss(str);
	

	double sp = 1;
	// int sp2 = static_cast<int>(sp);
	// cout << sp2 << " " <<endl;
	// cout << static_cast<double>(sp2) << endl;
    int test = static_cast<int>(sp);
    bool flag = static_cast<double>(test) == sp;
	cout << boolalpha << flag << endl;
	return 0;
}
