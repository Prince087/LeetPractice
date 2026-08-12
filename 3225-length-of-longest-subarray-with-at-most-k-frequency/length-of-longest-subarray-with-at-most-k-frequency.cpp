class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int left = 0;
        int max_len =0;
       // mp[0] = 1;
        for(int right =0; right<nums.size(); right++){
            mp[nums[right]]++;
            while(mp[nums[right]]>k){
                mp[nums[left]]--;
                left++;
               // right++;
                
            }
            max_len = max(max_len, right-left+1);
            
        }
        return max_len;
    }
};