#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> sortingWithComparator(vector<int> arr, bool flag) {
	//bubble-sort
	int n = arr.size();
	for (int i = 0; i < n; ++i) {
		for (int j = i + 1; j < n; ++j) {
			if (flag && arr[i] > arr[j])
				swap(arr[i], arr[j]);
			if (!flag && arr[i] < arr[j])
				swap(arr[i], arr[j]);
		}
	}
	return arr;
}
int main()
{
	vector<int> numbers  = {8, 5, 4, 4, 1, 2, 6};

	numbers = sortingWithComparator(numbers, false);
	for (int x : numbers) {
		cout << x << ", ";
	}
	return 0;
}
