class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int left =0;
        int max_len = 0;
        for(int right =0; right< s.length() ; right++){
            while(st.find(s[right]) != st.end()){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            int curr_len = right - left +1;
            max_len = max(max_len, curr_len);
        }
        return max_len;
    }
};