class Solution {
public:
    int lcs(int x, int y, string s1, string s2)
    {
        // your code here
        int t[x+1][y+1];
        for(int i=0;i<=x;i++){
            for(int j=0;j<=y;j++){
                if(i==0 || j==0){
                    t[i][j]=0;
                }
                
               
            }
        }
       
        for(int i=1;i<=x;i++){
            for(int j=1;j<=y;j++){
                if(s1[i-1]==s2[j-1]){
                    t[i][j]=1+t[i-1][j-1];
                }
                else {
                   t[i][j]=max(t[i-1][j],t[i][j-1]); 
                }
                
            }
        }
        return t[x][y];
    }
    bool isSubsequence(string s, string t) {
        int a=s.length();
        int b=t.length();
        int c=lcs(a,b,s,t);
        if(a==c) return true;
                 
        return false;
        
    }
};