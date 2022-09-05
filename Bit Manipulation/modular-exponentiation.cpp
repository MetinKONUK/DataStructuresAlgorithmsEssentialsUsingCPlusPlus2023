#include<bits/stdc++.h>

using namespace std;

//Modular Exponentiation
int solve(long int x, int y, int mod){
    x = x % mod;
    long int ans = 1;
    while(y > 0){
        if(y & 1)
            ans *= x;
        x = (x*x) % mod;
        y >>= 1;
    }
    return ans % mod;
}

int main(){
    cout << solve(12, 25, 10007);
    return 0;
}
