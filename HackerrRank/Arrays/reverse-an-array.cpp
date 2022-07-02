/*
 * Complete the 'reverseArray' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY a as parameter.
 */

vector<int> reverseArray(vector<int> arr) {
    int n = arr.size();
    for(int i = 0; i < n/2; ++i){
        swap(arr[i], arr[n - i - 1]);
    }
    return arr;
}