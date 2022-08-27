#include <iostream>
using namespace std;


void spiralPrint(int arr[][4], int n, int m) {
	int sr = 0, er = n - 1, sc = 0, ec = m - 1;
	while(sc < ec) {
		for (int col = sc; col <= ec; ++col) {
			cout << arr[sr][col] << " ";
		}

		for (int row = sr + 1; row <= er; ++row) {
			cout << arr[row][ec] << " ";
		}

		for (int col = ec - 1; col >= sc; --col) {
			if (sr == er) break;
			cout << arr[er][col] << " ";
		}

		for (int row = er - 1; row >= sr + 1; --row) {
			if (sc == ec) break;
			cout << arr[row][sc] << " ";
		}

		sr++;
		er--;
		sc++;
		ec--;
	}
	

}


int main()
{
	int arr[][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16} };
	spiralPrint(arr, 4, 4);
	return 0;
}
