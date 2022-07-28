#include <iostream>
#include <string>
using namespace std;


bool isPalindrome(string str)
{
	// your code goes here
	int n = 0;
	int i = str.length() - 1;
	while (n < str.length() / 2) {
		if (str[n] != str[i])
			return false;
		i--;
		n++;
	}
	return true;
}


int main()
{
	cout << isPalindrome("") << endl;
	return 0;
}
