class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxSum = nums[0]; // Initialize to first element
    int prefix = 1;       // Product from the left
    int suffix = 1;       // Product from the right
    int n = nums.size();
    
    for (int i = 0; i < n; i++) {
        // If prefix is 0, reset to 1
        prefix = prefix == 0 ? 1 : prefix;
        // If suffix is 0, reset to 1
        suffix = suffix == 0 ? 1 : suffix;
        
        // Update prefix and suffix
        prefix *= nums[i];
        suffix *= nums[n - 1 - i];
        
        // Update maxSum with the maximum of prefix and suffix
        maxSum = max(maxSum, max(prefix, suffix));
    }
    
    return maxSum;
    }
};