class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>set(nums.begin(), nums.end());
        int current_multiple = k;
        while(set.count(current_multiple)){
            current_multiple+=k;
        }
        return current_multiple;
    }
};