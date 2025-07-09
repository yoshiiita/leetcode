class Solution {
public:
    int countGoodSubstrings(string s) {
        int i=0,j=0;
        int n=s.length();
        if(n==0) return n;
        map<char,int> mp;
        int ans=0;
        while(j<n){
            mp[s[j]]++;
             if(j-i+1<3){
                j++;
            }
           else if(j-i+1==3){
                if(mp.size()==3){
                    ans++;
                }
                mp[s[i]]--;
                if(mp[s[i]]==0){
                    mp.erase(s[i]);
                }
                i++;
                j++;
            }
        }

        return ans;
    }
};