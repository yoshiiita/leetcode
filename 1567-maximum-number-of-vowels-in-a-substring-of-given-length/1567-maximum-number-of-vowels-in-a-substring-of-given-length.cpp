class Solution {
public:
    int maxVowels(string s, int k) {
          int i=0,j=0;
         int n=s.length();
         long long ans=0,arrayTotal=0,numberofVowels=0;

        while(j<n){
            if(s[j]=='a'|| s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'){
                numberofVowels++;
            }
            if((j-i+1)==k){
                ans=max(ans,numberofVowels);
                if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                numberofVowels--;}
                i++;
            }
            j++;
        }
        return ans;

        
    }
};