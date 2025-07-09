class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
         int i=0,j=0;
         int n=cardPoints.size();
         long long ans=0,arrayTotal=0,sum=0;
        for(int i=0;i<n;i++){
            arrayTotal +=cardPoints[i];
        }
        if(n==k) return arrayTotal;
        while(j<n){
            sum +=cardPoints[j];
            if((j-i+1)==(n-k)){
                ans=max(ans,arrayTotal-sum);
                sum -=cardPoints[i];
                i++;
            }
            j++;
        }
        return ans;


    }
};