#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int maxSumSubarray(vector<int> arr) {
	int n = arr.size(), maxx = arr[0];
	//check for all negative test-case
	bool all_negative = true;
	for (int i = 0; i < n; ++i) {
		if (arr[i] >= 0) all_negative = false;
		if (arr[i] > maxx) maxx = arr[i];
	}
	if (all_negative) return maxx;


	//Kadane's Algorithm
	int cs = 0, ms = 0;
	for (int i = 0; i < n; ++i) {
		if (arr[i] + cs > 0) cs += arr[i];
		else cs = 0;

		ms = max(cs, ms);
	}
	return ms;
}
int main()
{
	vector<int> arr = {-1 , -2, -4, -5};
	cout << "Maximum subarray sum is : " << maxSumSubarray(arr);
	return 0;
}
