#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int pairSticks(int arr[], int x, int n)
{
	//sort
	for (int i = 0; i < n; ++i) {
		for (int j = i + 1; j < n; ++j) {
			if (arr[i] > arr[j])
				swap(arr[i], arr[j]);
		}
	}
	int res = 0;
	for (int i = 0; i < n-1; ++i) {
		if (arr[i + 1] - arr[i] <= x) {
			res++;
			i++;
		}
	}
	return res;

}

int main()
{
	int arr[] = {2, 6, 7, 9, 12, 15, 17};
	int n = sizeof(arr) / sizeof(int);
	int x = 2;
	cout << pairSticks(arr, x, n);
	return 0;
}
