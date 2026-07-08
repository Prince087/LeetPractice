class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left =0;
        int max_len = 0;
        unordered_map<char, int>mp;
        for(int right = 0; right<s.length(); right++){
            char cch = s[right];
            if(mp.count(cch) && mp[cch]>=left){
                left = mp[cch] + 1;

            }
            mp[cch] = right;
            max_len = max(max_len, right-left+1);
        }
        return max_len;
    }
};