class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int org_one_cnt = 0;
        for(char c : s){
            if (c == '1') org_one_cnt++;
        }
        string t = "1" + s + "1";
        vector<pair<char, int>> freq;
        char curr_element = t[0];
        int curr_count = 1;
        
        for(int i = 1; i<t.size(); i++){
            if(t[i] == curr_element){
                curr_count++;
            }else{
                freq.push_back({curr_element, curr_count});
                curr_element = t[i];
                curr_count = 1;
            }
        }
        freq.push_back({curr_element, curr_count});
        int max_ones = 0;
        for(int i=1; i+1< freq.size(); i++){
            if(freq[i].first == '1' && freq[i-1].first == '0' && freq[i+1].first == '0'){
                max_ones = max(max_ones, freq[i-1].second + freq[i+1].second);
            }
        }
        return max_ones + org_one_cnt;
    }
};