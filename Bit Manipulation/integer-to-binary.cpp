#include<bits/stdc++.h>

using namespace std;

int IntegerToBinary(int n){
    int ans = 0;
    int co = 1;
    while(n > 0){
        if(n % 2 == 1)
            ans += co;
        co *= 10;
        n = n / 2;
    }
    return ans;
}

int main(){

    cout << solve(64);
    return 0;
}
