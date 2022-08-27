#include <iostream>
#include <vector>
using namespace std;


//pascal's triangle
//vector<vector<int>> recursive(int n) {
//	if (n == 0) return {};
//	if (n == 1) return { {1} };
//
//	vector<int> row = { 1 };
//	vector<vector<int>> previousRows = recursive(n - 1);
//	vector<int> previousRow = previousRows[previousRows.size() - 1];
//
//	for (int i = 0; i < previousRow.size() - 1; ++i) {
//		row.push_back(previousRow[i] + previousRow[i + 1]);
//	}
//
//	row.push_back(1);
//	previousRows.push_back(row);
//
//	return previousRows;
//}

//pascal's triangle
vector<vector<int>> iterative(int n) {
	if (n == 0) return {};
	vector<vector<int>> result;
	result.push_back({1});

	for (int i = 1; i < n; ++i) {
		vector<int> previousRow = result[i - 1];
		vector<int> row = { 1 };
		for (int j = 0; j < previousRow.size() - 1; ++j) {
			row.push_back(previousRow[j] + previousRow[j + 1]);
		}
		row.push_back(1);
		result.push_back(row);
	}

	return result;
}


int main()
{
	vector<vector<int>> result = iterative(6);
	
	for (int i = 0; i < result.size(); ++i) {
		for (int j = 0; j < result[i].size(); ++j) {
			cout << result[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
