#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
pair<int, int> closestSum(vector<int> arr, int x) {
	int n = arr.size();
	pair<int, int> closest;
	double minn = INFINITY;
	for (int i = 0; i < n-1; ++i)
		for (int j = i+1; j < n; ++j)
			if (abs(x - (arr[i] + arr[j])) < minn) {
				minn = abs(x - (arr[i] + arr[j]));
				closest = { arr[i], arr[j] };
			}
	return closest;
}

int main()
{
	vector<int> arr = {10, 22, 28, 29, 30, 40};
	int x = 54;
	pair<int, int> res = closestSum(arr, x);
	cout << "The closest pair is: " << res.first << ", " << res.second;
	return 0;
}
