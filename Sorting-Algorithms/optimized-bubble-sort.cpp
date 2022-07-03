#include<bits/stdc++.h>
using namespace std;

vector<int> optimizedBubbleSort(vector<int> arr){
    int n = arr.size();
	bool alreadySorted = true;
	for (int i = 1; i < n; ++i) {
		if (arr[i] < arr[i - 1]) alreadySorted = false;
	}
	if (alreadySorted) return arr;
	for (int i = 0; i < n; ++i) {
		for (int j = i + 1; j < n; ++j) {
			if (arr[i] > arr[j]) {
				swap(arr[i], arr[j]);
			}
		}
	}
	return arr;
}