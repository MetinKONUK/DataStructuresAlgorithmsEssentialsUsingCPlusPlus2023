/*
 * Complete the 'matchingStrings' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. STRING_ARRAY strings
 *  2. STRING_ARRAY queries
 */

vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    int n = queries.size(), m = strings.size();
    vector<int> res(n, 0);
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if(queries[i] == strings[j]) res[i]++;
        }
    }
    return res;
}
