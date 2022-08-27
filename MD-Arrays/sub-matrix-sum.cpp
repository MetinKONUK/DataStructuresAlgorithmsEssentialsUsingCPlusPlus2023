#include <iostream>
#include <vector>
using namespace std;


//sub-matrix sum
int sum(vector<vector<int>> matrix, int sr, int sc, int er, int ec) {

	//auxilary matrix consists of sum of (0, 0) to (i, j)
	int n = matrix.size();
	int m = matrix[0].size();

	vector<vector<int>> aux(n, vector<int>(m, 0));
	
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			int s0 = matrix[i][j];
			int s1 = j > 0 ? aux[i][j - 1] : 0;
			int s2 = i > 0 ? aux[i - 1][j] : 0;
			int s3 = i > 0 && j > 0 ? aux[i - 1][j - 1] : 0;
			aux[i][j] = s1 + s2 - s3 + s0;
		}
	}

	int result = aux[er][ec];
	if(sr > 0)
		result -= aux[sr - 1][ec];
	if (sc > 0)
		result -= aux[er][sc - 1];
	if (sr > 0 && sc > 0)
		result += aux[sr - 1][sc - 1];
	return result;

}


int main()
{
	vector<vector<int>> matrix = { 
					{1, 2, 3, 4, 6},
					{5, 3, 8, 1, 2},
					{4, 6, 7, 5, 5},
					{2, 4, 8, 9, 4} };

	cout << sum(matrix, 1, 2, 3, 3);

	return 0;
}
