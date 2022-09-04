#include<bits/stdc++.h>

using namespace std;

void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();
    if(n == 1) return;
    int x = n % 2 ? n/2 : n/2 -1;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j <= x; ++j){
            swap(matrix[i][j], matrix[i][n-j-1]);
        }
    }
    if(n == 2){
        swap(matrix[0][0], matrix[1][1]);
        return;
    }
    int a = n-1;
    for(int i = 0; i <= n/2+1; ++i){
        for(int j = 0; j <= a; ++j){
            if(i + j == n-1)continue;
            swap(matrix[i][j], matrix[n-j-1][n-i-1]);
        }
        a--;
    }
}

int main(){
    int n = 7;
    vector<vector<int>> arr(n, vector<int>(n, 0));
    int a = 1;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; j++){
            arr[i][j] = a;
            ++a;
        }
    }

    rotate(arr);

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
