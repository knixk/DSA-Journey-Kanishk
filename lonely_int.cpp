/*
 * Complete the 'lonelyinteger' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY a as parameter.
 */

// Time complexity:  O(N)
// Space complexity: O(N)

// I used a map to store int names and frequency

int lonelyinteger(vector<int> a) {
    int n = a.size();
    
    unordered_map <string, int> my_map; 
    
    if (n == 1) {
        return n;
    }
    
    for (int i = 0; i < n; i++) {
        string num_of_string = to_string(a[i]);
        my_map[num_of_string]++;
    }
    
    for (auto x : my_map) {
        if (x.second == 1) {
            return stoi(x.first);
        }
    }
    
    return -1;
}