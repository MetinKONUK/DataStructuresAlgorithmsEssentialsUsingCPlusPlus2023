#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<pair<int, int>> sortCartesian(vector<pair<int, int>> arr)
{
	int n = arr.size();
	//bubble-sort
	for (int i = 0; i < n; ++i) {
		for (int j = i + 1; j < n; ++j) {
			if (arr[i].first > arr[j].first)
				swap(arr[i], arr[j]);
			else if (arr[i].first == arr[j].first && arr[i].second > arr[j].second)
				swap(arr[i], arr[j]);
		}
	}
	return arr;
}

int main()
{
	vector<pair<int, int>> pairs = { {3, 4}, {2, 3}, {3, 7}, {1, 5}, {3, 4} };
	pairs = sortCartesian(pairs);
	for (pair<int, int> pair: pairs) {
		cout << "(" << pair.first << ", " << pair.second << ") ";
	}
	return 0;
}
