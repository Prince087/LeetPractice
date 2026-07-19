class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int> last(26);

        // Store last occurrence of each character
        for (int i = 0; i < s.size(); i++) {
            last[s[i] - 'a'] = i;
        }

        vector<bool> used(26, false);
        string st;   // acts as stack

        for (int i = 0; i < s.size(); i++) {
            char ch = s[i];

            // Already included
            if (used[ch - 'a'])
                continue;

            // Remove larger characters if they appear later
            while (!st.empty() &&
                   ch < st.back() &&
                   last[st.back() - 'a'] > i) {
                used[st.back() - 'a'] = false;
                st.pop_back();
            }

            st.push_back(ch);
            used[ch - 'a'] = true;
        }

        return st;
    }
};