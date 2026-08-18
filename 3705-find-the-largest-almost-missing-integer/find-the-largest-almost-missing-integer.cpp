class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();

        if (k == n)
            return *max_element(nums.begin(), nums.end());

        if (k == 1) {
            int ans = -1;
            for (int x : nums) {
                if (count(nums.begin(), nums.end(), x) == 1)
                    ans = max(ans, x);
            }
            return ans;
        }

        int ans = -1;

        if (count(nums.begin(), nums.end(), nums[0]) == 1)
            ans = nums[0];

        if (count(nums.begin(), nums.end(), nums[n - 1]) == 1)
            ans = max(ans, nums[n - 1]);

        return ans;
    }
};