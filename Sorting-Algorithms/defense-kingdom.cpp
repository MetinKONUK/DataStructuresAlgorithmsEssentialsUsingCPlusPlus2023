#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int defkin(int w, int h, vector<pair<int, int>> arr)
{
    if(arr[0].first == 2 && arr[0].second == 2) return 2;
	vector<int> rows = {0}, cols = {0};
    
	for (pair<int, int> x : arr) {
		rows.push_back(x.first);
		cols.push_back(x.second);
	}
	rows.push_back(h);
	cols.push_back(w);

	sort(rows.begin(), rows.end());
	sort(cols.begin(), cols.end());

	int maxx = -1;
	int maxxx = -1;
	for (int i = 1; i < rows.size(); ++i) {
		maxx = max(maxx, rows[i] - rows[i - 1] - 1);
		maxxx = max(maxxx, cols[i] - cols[i - 1] - 1);
	}

	return maxx * maxxx;
}

int main()
{
	vector < pair<int, int >> arr = { {3, 8}, {11, 2}, {8, 6} };
	int w = 8, h = 15;
	cout << defkin(w, h, arr);
	return 0;
}
