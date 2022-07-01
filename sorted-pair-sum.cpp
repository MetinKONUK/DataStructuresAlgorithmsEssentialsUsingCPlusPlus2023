#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
pair<int, int> closestSum(vector<int> arr, int x) {
	int l = 0, r = 0, n = arr.size();
	int left = 0, right = n - 1, minn = INT_MAX;
	while (left < right) {
		if (abs(x - (arr[left] + arr[right])) < minn)
			l = left, r = right, minn = abs(x - (arr[left] + arr[right]));
		if (arr[left] + arr[right] > x) right--;
		else left++;
	}
	return { arr[l], arr[r] };
}

int main()
{
	vector<int> arr = {10, 22, 28, 29, 30, 40};
	int x = 54;
	pair<int, int> res = closestSum(arr, x);
	cout << "The closest pair is: " << res.first << ", " << res.second;
	return 0;
}
