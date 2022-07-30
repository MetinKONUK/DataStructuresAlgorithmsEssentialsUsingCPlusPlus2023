#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


bool arePermutation(string a, string b)
{
	if (a.length() != b.length()) return false;
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	int i = 0, n = a.length();
	for (int i = 0; i < n; ++i) {
		if (a[i] != b[i]) return false;
	}

	return true;
}


int main()
{
	string A = "fatal";
	string B = "lafat";
	cout << (arePermutation(A, B) ? "true" : "false");
	return 0;
}
