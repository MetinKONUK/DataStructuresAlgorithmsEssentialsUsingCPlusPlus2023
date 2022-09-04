#include<bits/stdc++.h>

using namespace std;


float distance(pair<int, int> coordinate){
    int f = coordinate.first, s = coordinate.second;
    return sqrt(f*f + s*s);
}


int compare(pair<int, int> a, pair<int, int> b){
    return distance(a) < distance(b);
}


int main(){

    vector<pair<int, int>> coordinates = { {2,3}, {1,2}, {3,4}, {2,4}, {1,4} };
    sort(coordinates.begin(),coordinates.end(), compare);

    for(pair<int, int> p: coordinates){
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}
