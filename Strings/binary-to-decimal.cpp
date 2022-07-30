#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int binaryToDecimal(string s)
{
	// your code goes here
	int exponent = s.length() - 1, result = 0;
	for (int i = 0; i < s.length(); ++i) {
		int co = s[i] == '1' ? 1 : 0;
		result += co * pow(2, exponent);
		exponent--;
	}
	return result;
}


int main()
{
	string s("1011");
	cout << binaryToDecimal(s);
	return 0;
}
