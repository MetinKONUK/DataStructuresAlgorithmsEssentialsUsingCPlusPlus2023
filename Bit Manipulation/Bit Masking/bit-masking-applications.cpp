#include<bits/stdc++.h>

using namespace std;

//get i'th bit of the number
//it is either 0 or 1
int get(int n, int i){
    int mask = (1 << i);
    return (n & mask) > 0 ? 1 : 0;
}

//set i'th bit of the number as 1
void Set(int &n, int i){
    int mask = 1 << i;
    n = n | mask;
}


//set i'th bit of the number as 0
void Clear(int &n, int i){
    int mask = ~(1 << i);
    n = n & mask;
}   


//set last i bits as 0
void clearLastIBits(int &n, int i){
    int mask = (-1 << i); // ~0 = -1
    n = n & mask;
}


//set [a, b] bits as 0
void clearRangeOfBits(int &n, int i, int j){
    int a = -1 << (j+1);
    int b = (1 << i) - 1;
    int mask = a | b;
    n = n & mask;
}


void replaceBits(int &n, int i, int j, int m){
    clearRangeOfBits(n, i, j);
    int mask = m << i;
    n = n | mask;
}


bool isPowerOfTwo(int n){
    return (n & (n-1)) == 0;
}


int countOfSets(int n){ //O(LogN)
    int res = 0; //count of sets

    while(n != 0){
        res += n & 1; //last bit
        n = n >> 1; //shift to the next bit
    }
    return res;
}

int countOfSetsHack(int n){ //O(ans);
    int ans = 0;
    while(n != 0){
        n = n & (n-1);
        ans++;
    }
    return ans;
}




int main(){

    cout << countOfSetsHack(5);

    return 0;
}
