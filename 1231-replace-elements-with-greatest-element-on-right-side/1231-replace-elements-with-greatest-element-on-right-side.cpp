class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        vector<int> ans;
        if(n==0) return ans;
        for(int i=0;i<n-1;i++){
            int maxi=INT_MIN;
            for(int j=i+1;j<n;j++){
                
                    maxi=max(arr[j],maxi);
            }
            ans.push_back(maxi);
        }
        ans.push_back(-1);
        return ans;
        
    }
};