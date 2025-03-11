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
	string str(argv[1]);
	stringstream ss(str);
	
	double sp;
	ss >> sp;
	if (ss.fail())
	{
		cout<<"fsdsad"<<endl;
	}
	else
		cout << sp<<str.length() <<endl;
	std::isnan();
	return 0;
}
