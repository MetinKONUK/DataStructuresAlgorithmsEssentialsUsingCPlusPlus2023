#include<iostream>
#include "Vector.h"

using namespace std;


int main() {
	Vector<char> str(10);
	Vector<Vector<int>> matrix(10);
	matrix[0].push_back(10);
	cout << matrix[0][0] << endl;

	Vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.pop_back();
	cout << v.front() << endl << v.back() << endl;
	cout << v.size() << endl;
	cout << v.at(2) << endl;
	
	for (int i = 0; i < v.size(); ++i) {
		//cout << v.at(i) << " ";
		cout << v[i] << " ";
	}

	return 0;
}
