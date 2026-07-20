class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();

        vector<int> nums;

        for (auto &row : grid)
            for (int x : row)
                nums.push_back(x);

        int sz = nums.size();
        k %= sz;

        rotate(nums.rbegin(), nums.rbegin() + k, nums.rend());

        int idx = 0;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                grid[i][j] = nums[idx++];

        return grid;
    }
};