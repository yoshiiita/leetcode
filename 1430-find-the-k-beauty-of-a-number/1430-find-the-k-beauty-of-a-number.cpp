class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string numStr = to_string(num);
        int n = numStr.size();

        // check for edge case: if k is larger than the number of digits, no substrings possible
        if (k > n) {
            return 0;
        }

        // step 2 - using sliding window approach: check all k-length substrings
        // count k-beauty of num
        int count = 0;
        for (int i = 0; i <= n - k; i++) {
            // step 3 - extract substring of length k starting at position i
            string subStr = numStr.substr(i, k);

            // step 4 - convert substring to integer to check divisibility
            int divisor = stoi(subStr);

            // step 5 - check given conditions for k-beauty
            if (divisor != 0 && num % divisor == 0) {
                count++;
            }
        }

        // step 6 - return count (num of substring) that satisfy above condition
        return count;
        
    }
};