#include <iostream>
#include <vector>
using namespace std;


//pascal's triangle
vector<vector<int>> recursive(int n) {
	if (n == 0) return {};
	if (n == 1) return { {1} };

	vector<int> row = { 1 };
	vector<vector<int>> previousRows = recursive(n - 1);
	vector<int> previousRow = previousRows[previousRows.size() - 1];

	for (int i = 0; i < previousRow.size() - 1; ++i) {
		row.push_back(previousRow[i] + previousRow[i + 1]);
	}

	row.push_back(1);
	previousRows.push_back(row);

	return previousRows;
}


//vector<vector<int>> iterative(int n) {
//	return;
//}


int main()
{
	vector<vector<int>> result = recursive(0);
	
	for (int i = 0; i < result.size(); ++i) {
		for (int j = 0; j < result[i].size(); ++j) {
			cout << result[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
