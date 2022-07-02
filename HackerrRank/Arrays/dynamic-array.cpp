/*
 * Complete the 'dynamicArray' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. 2D_INTEGER_ARRAY queries
 */

vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    vector<vector<int>> arr(n, vector<int>());
    int lastAnswer = 0;
    vector<int> answers;
    for(vector<int> query: queries){
        int idx = (query[1] ^ lastAnswer) % n;
        if(query[0] == 1)
            arr[idx].push_back(query[2]);
        else {
            lastAnswer = arr[idx][query[2] % (arr[idx].size())];
            answers.push_back(lastAnswer);
        }
    }
    return answers;
} 