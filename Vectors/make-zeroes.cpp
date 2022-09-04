#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> makeZeroes(vector<vector<int>> arr){
    int n = arr.size();
    for(int i = 0; i < n; ++i){
        bool flag = false;
        for(int j = 0; j < arr[i].size(); ++j){
            if(flag){
                arr[i][j] = 0;
                continue;
            }

            if(arr[i][j] == 0){
                int z = j - 1;
                for(int h = 0; h < n; ++h)
                    arr[h][j] = -1;
                while(z >= 0){
                    arr[i][z] = 0;
                    z--;
                }
                flag = true;
            }
        }
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < arr[i].size(); ++j){
            if(arr[i][j] == -1) arr[i][j] = 0;
        }
    }

    return arr;
}
int main(){
    vector<vector<int>> matrix = { {5, 4, 3, 9}, {2, 0, 7, 6}, {1, 3, 4, 0}, {9, 8, 3, 4} };
    for(vector<int> v: makeZeroes(matrix)){
        for(int x: v){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
