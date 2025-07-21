class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int len=0;
        for(int i=0;i<nums.size();i++){
            // len will point [0,1,2,2,3,0,4,2] at index 3 and i will be at 5, and then swap
            // hence making the val wale numbers go back of the array
            if(nums[i]!=val){
                nums[len]= nums[i];
                len++;
                
            }
        }
        return len;
    }
};