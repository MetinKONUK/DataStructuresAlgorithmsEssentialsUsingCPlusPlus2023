#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


string vowel(string s) {
	// your code goes here
	char vowels[] = {'a', 'e', 'i', 'o', 'u'};
	int i = 0;
	while (i < s.length()) {
		bool contains = false;
		for (char ch : vowels)
			if (ch == s[i])
				contains = true;
		if (!contains) {
			s.erase(i, 1);
			continue;
		}
		i++;

	}
	return s;
}


int main()
{
	string s("aeoibsddaeioudb");
	cout << vowel(s) << endl;
	return 0;
}
