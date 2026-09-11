class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        if(nums.size() < k) return 0;
        int window_sum = 0;
        for(int i =0; i<k; i++){
            window_sum+=nums[i];
        }
        int max_window_sum = window_sum;
        for(int right =k; right < nums.size(); right++){
            window_sum+=nums[right];
            window_sum-=nums[right-k];
            max_window_sum = max(max_window_sum, window_sum);
        }
        return double(max_window_sum)/k;
    }
};