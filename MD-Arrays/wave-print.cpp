#include <iostream>
#include <vector>
using namespace std;


vector<int> WavePrint(int m, int n, vector<vector<int>> arr)
{
	bool flag = false;
	int pos = 0;
	vector<int> res(n * m, 0);
	for (int i = m-1; i >= 0; --i) {
		if (flag) {
			for (int j = 0; j <= n - 1; ++j) {
				res[pos] = arr[j][i];
				pos++;
			}
		}
		else {
			for (int j = n - 1; j >= 0; --j) {
				res[pos] = arr[j][i];
				pos++;
			}

		}
		flag = !flag;
	}
	return res;
}


int main()
{
	vector<vector<int>> arr = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16} };
	cout << WavePrint(4, 4, arr)[0] << " " << WavePrint(4, 4, arr)[15] << endl;

	return 0;
}
