/*
 * Complete the 'rotateLeft' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER d
 *  2. INTEGER_ARRAY arr
 */

vector<int> rotateLeft(int k, vector<int> arr) {
    int n = arr.size();
    vector<int> res(n, 0);
    for(int i = 0; i < n; ++i){
        res[(i - k + n) % n] = arr[i];
    }
    return res;
}