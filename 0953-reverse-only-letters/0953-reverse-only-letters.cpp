class Solution {
public:
    string reverseOnlyLetters(string s) {
      
      int left=0,right=s.length();

      while(left<right){
        if(isalpha(s[left]) && isalpha(s[right]))
        {
            swap(s[left],s[right]);
            left++;
            right--;
        }
        else if( !isalpha(s[left])){
            left++;
        }
        else{
            right--;
        }
      }

      return s;
        
    }
};