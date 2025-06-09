class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimum = INT_MAX, maxi=INT_MIN;

        for(auto i : prices){
            minimum=min(minimum,i);
            maxi=max(maxi,i-minimum);
        }
        return maxi;
    }
};