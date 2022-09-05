#include<bits/stdc++.h>

using namespace std;

//returns the number which occurs only once in the array
int solve(vector<int> v){
    int ans = v[0];
    for(int i = 1; i < v.size(); ++i){
        ans ^= v[i];
    }
    return ans;
}

int main(){

    vector<int> v = {1, 4, 5, 4, 6, 5, 1};
    cout << solve(v);
    return 0;
}
