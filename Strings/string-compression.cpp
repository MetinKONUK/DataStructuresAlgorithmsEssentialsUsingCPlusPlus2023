#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> digits(int number) {
	vector<int> res;
	while (number > 10) {
		res.push_back(number % 10);
		number = number / 10;
	}
	res.push_back(number);
	reverse(res.begin(), res.end());
	return res;
}

int compress(vector<char>& chars) {
	// your code goes here
	vector<char> res;
	int x = 0;
	int count = 1;
	for (int i = 1; i < chars.size(); ++i) {
		if(chars[i] == chars[i - 1]){
			count++;
		}
		else if(chars[i] != chars[i-1] || i == chars.size() - 1) {
			x++;
			res.push_back(chars[i - 1]);
			if (count != 1) {
				for (int digit : digits(count)) {
					x++;
					res.push_back(digit + 48);
				}
			}
			count = 1;
		}
	}
	for (int i = 0; i < res.size(); ++i) {
		chars[i] = res[i];
	}
	return x;
}


int main()
{
	vector<char> chars = { 'a', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', '\0'};
	int n = compress(chars);
	for (int i = 0; i < n; ++i) {
		cout << chars[i] << " ";
	}
	return 0;
}
