#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int largestElement(vector<int> arr) {
	int n = arr.size();
	int max = arr[0];
	for (int i = 1; i < n; ++i) {
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
int main()
{
	vector<int> arr = { 4, -5, 3, 6, -2, 2 };
	cout << "LargestElement is : " << largestElement(arr);
	return 0;
}
