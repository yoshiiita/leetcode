class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        if (n == 0)
            return n;
        // int i = 0, j = n - 1;
         int maxi = 0;

        // while (i < j) {
        //     if (colors[i] != colors[j]) {
        //         maxi = max(maxi, abs(i - j));
        //     }
        //     j--;
        // }
        // i=0,j=n-1;
        // while (i < j) {
        //     if (colors[i] != colors[j]) {
        //         maxi = max(maxi, abs(i - j));
        //     }
        //     i++;
        // }
        // return maxi;

        for(int i=0;i<n;i++){
            if(colors[0]!=colors[i]){
                maxi=max(maxi,i);

            }
            if(colors[i]!=colors[n-1]){
                maxi=max(maxi,n-1-i);
            }
        }
        return maxi;
    }
};