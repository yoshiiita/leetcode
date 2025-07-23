class Solution {
public:

    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxi=0,left =0,right=nums.size()-1;

        while(left<right){
            int sum = nums[left]+nums[right];
            maxi=max(maxi,sum);
            left++;
            right--;

        }
        return maxi;
        
    }
};