#include <iostream>
#include <vector>
using namespace std;


/*
This dynamic matrix is stored inside heap memory and will exist until
the programmer delete it or the programme's finish

Static values are stored in stack and deleted after execution
of the scope which they were inside of
*/

int** createDynamicMatrix(int rows, int cols) {
	int** arr = new int* [rows];

	//allocate memory for each cells
	for (int i = 0; i < rows; ++i) {
		arr[i] = new int[cols];
	}

	//initialize the matrix' cells with 0s
	for (int i = 0; i < rows; ++i)
		for (int j = 0; j < cols; ++j)
			arr[i][j] = 0;

	return arr;
}


int main() {
	int** matrix = createDynamicMatrix(10, 10);

	cout << matrix[0][0];
	
	return 0;
}
