class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& ans) {
        int m=ans.size();
        int n=ans[0].size();
        int dp[m][n];
        bool flag =false;
        
        //1st row
        for(int i=0;i<n;i++){
            //if there is obstacle in the first row thn make all of them 0
                if(flag|| ans[0][i]==1){
                    flag=true;
                    dp[0][i]=0;
                }
            else{
                dp[0][i]=1;
            }
            
            
        }
        //1st column
        flag=false;
        for(int i=0;i<m;i++){
            //if there is obstacle in the first column thn make all of them 0
                if(flag|| ans[i][0]==1){
                    flag=true;
                    dp[i][0]=0;
                }
            else{
                dp[i][0]=1;
            }
        }
            
           
        
        
        
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(ans[i][j] ==1 ){
                    dp[i][j]=0;}
                else{
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
                }
            }
        }
        return dp[m-1][n-1];
    }
};