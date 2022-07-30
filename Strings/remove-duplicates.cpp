#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


string removeDuplicate(string s) {
	// your code goes here
	sort(s.begin(), s.end());
	int i = 1;
	while(i < s.length()) {
		if (s[i] == s[i - 1]) {
			s.erase(i-1, 1);
			continue;
		}
		i++;
	}
	return s;
}


int main()
{
	string s("geeksforgeeks");
	cout << removeDuplicate(s);
	return 0;
}
