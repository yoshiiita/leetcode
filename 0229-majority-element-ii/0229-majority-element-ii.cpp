class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        //sort(ans.begin(),ans.end());
        int n=nums.size();
        map<int,int> mp;
        for(auto it:nums){
            mp[it]++;
        }
        for(auto it:mp){
            if(it.second > n/3){
            ans.push_back(it.first);
            }

        }
        return ans;
        
    }
};