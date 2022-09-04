#include<bits/stdc++.h>

using namespace std;

int c = 0;
bool compare(pair<string, int> a, pair<string, int> b){
    return c == 1 ? a.second < b.second : a.first < b.first;
}

vector<pair<string,int>> solve(vector<pair<string,int>> v, string s){
    c = s == "name" ? 0 : 1;
    sort(v.begin(), v.end(), compare);
    return v;
}


int main(){

    vector<pair<string, int>> fruits { {"Mango",100}, {"Guava",70}, {"Grapes",40}, {"Apple",60}, {"Banana",30} };
    string s = "name";
    fruits = solve(fruits, s);

    for(pair<string, int> p: fruits){
        cout << p.first << " " << p.second << endl;
    }

    cout << endl;
    return 0;
}
