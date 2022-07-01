#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> kRotate(vector<int> arr, int k) {
	int n = arr.size();
	vector<int> res(n, 0);
	for (int i = 0; i < n; ++i) {
		res[(i + k) % n] = arr[i];
	}
	return res;
}

int main()
{
	vector<int> arr = {1, 3, 5, 7, 9};
	int k = 2;
	for (int x : kRotate(arr, k)) {
		cout << x << ", ";
	}

	return 0;
}
