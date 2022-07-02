/*
 * Complete the 'hourglassSum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

int hourglassSum(vector<vector<int>> arr) {
    int maxx = INT32_MIN;
    for(int i = 1; i <= 4; ++i){
        for(int j = 1; j <= 4; ++j){
            int summ = arr[i][j];
            summ += arr[i-1][j-1] + arr[i-1][j] + arr[i-1][j+1];
            summ += arr[i+1][j-1] + arr[i+1][j] + arr[i+1][j+1];
            if (summ > maxx) maxx = summ;
        }
    }
    return maxx;
}