#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int lowerBound(vector<int> arr, int val) {
	// arr: sorted
    //binary search approach
	if (arr[0] > val) return -1;
	
	int n = arr.size(), left = 0, right = n - 1, mid;
	while (left <= right) {
		mid = (left + right) / 2;
		if (arr[mid] == val) return arr[mid];
		else if (arr[mid] < val) left = mid + 1;
		else right = mid - 1;
	}
	return arr[min(left, right)];
}

int main()
{
	vector<int> arr = {3, 6, 8, 10};
	int val = 7;
	cout << "Index of lower bound is : " << lowerBound(arr, val);
	return 0;
}
