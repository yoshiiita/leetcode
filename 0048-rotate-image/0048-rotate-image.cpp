class Solution {
public:
    void rotate(vector<vector<int>>& arr) {
        int n=arr[0].size();
        // transpose the array
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                swap(arr[i][j],arr[j][i]);
            }
        }
        // after this it would be
        //  1 4 7
        //  2 5 8
        //  3 6 9

        // reverse each row
        for(int i=0;i<n;i++){
            for(int j=0;j<(n/2);j++){
                swap(arr[i][j],arr[i][n-1-j]);
            }
        }
        // 7 4 1
        // 8 5 2
        // 9 6 3
        
    }

};