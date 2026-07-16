class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int maxn = nums[0];
        vector<int> pre;
        for(int i =0; i<nums.size(); i++){
            maxn = max(maxn, nums[i]);
            pre.push_back(gcd(nums[i], maxn));
        }
        sort(pre.begin(), pre.end());
        int left = 0;
        int right = pre.size()-1;
        long long ans = 0;
        while(right>left){
            ans+=gcd(pre[left],pre[right]);
            left++;
            right--;
        }
        return ans;
    }
};