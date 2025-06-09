class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
      int n = grid.size();
        int repeat, missing;
        set<int> st;

        // Find the repeated number
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (st.count(grid[i][j])) {
                    repeat = grid[i][j]; // Found the repeated number
                    //break;
                } else {
                    st.insert(grid[i][j]);
                }
            }
        }

        // Find the missing number
        for (int i = 1; i <= n * n; ++i) {
            if (!st.count(i)) { // The missing number is the one absent in the set
                missing = i;
                break;
            }
        }

        return {repeat, missing};
        
    }
};