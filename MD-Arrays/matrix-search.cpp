#include <iostream>
#include <vector>
using namespace std;


vector<int> matrixSearch(int n, int m, int arr[][4], int value) {
	//matrix is sorted both column wise & row wise
	//staircase search O(N + M)
	int x = 0, y = m - 1;
	while (x < n && y > -1) {
		if (arr[x][y] == value) return {x, y};
		if (arr[x][y] > value) y--;
		else x++;
	}
	return {-1, -1};
}

int main()
{
	int arr[][4] = {
		{10, 20, 30, 40},
		{15, 25, 35, 45},
		{27, 29, 37, 48},
		{32, 33, 39, 50} };

	vector<int> res = matrixSearch(4, 4, arr, 50);
	cout << res[0] << " " << res[1];

	return 0;
}
