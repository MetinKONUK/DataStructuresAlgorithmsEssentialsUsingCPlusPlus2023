#include <iostream>
#include <vector>
using namespace std;

//2D Array Prefix Sum
int mangoTrees(vector<vector<char>> field, int n, int totalTrees) {
	vector<vector<int>> aux(n, vector<int>(n, 0));
	aux[0][0] = field[0][0] == '#' ? 1 : 0;
	int maxx = totalTrees / 4;
	int res = -1;
	int prefix;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			int pointVal = field[i][j] == '#' ? 1 : 0;
			int s1 = i > 0 ? aux[i - 1][j] : 0;
			int s2 = j > 0 ? aux[i][j - 1] : 0;
			int s3 = j > 0 && i > 0 ? aux[i - 1][j - 1] : 0;
			prefix = s1 + s2 - s3 + pointVal;
			if (prefix <= maxx && prefix > res)
				res = prefix;
			aux[i][j] = prefix;
		}
	}

	return res;
}


int main()
{
	vector<vector<char>> field = { 
		{'.', '#', '#', '.', '.', '.'},
		{'#', '.', '.', '#', '#', '.'},
		{'.', '#', '.', '.', '.', '.'},
		{'.', '#', '#', '.', '.', '#'},
		{'#', '.', '.', '#', '#', '.'},
		{'.', '#', '.', '.', '.', '.'}};

	cout << mangoTrees(field, 6, 13);
	return 0;
}
