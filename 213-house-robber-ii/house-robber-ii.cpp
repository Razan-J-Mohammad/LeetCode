

class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.empty()) return 0;
        if (nums.size() == 1) return nums[0];
        if (nums.size() == 2) return max(nums[0], nums[1]);
        auto robLinear = [](const vector<int>& nums) {
            int n = nums.size();
            if (n == 0) return 0;
            if (n == 1) return nums[0];
            vector<int> dp(n, 0);
            dp[0] = nums[0];
            dp[1] = max(nums[0], nums[1]);

            for (int i = 2; i < n; ++i) {
                dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
            }
            return dp[n - 1];
        };

        int max1 = robLinear(vector<int>(nums.begin(), nums.end() - 1));
        int max2 = robLinear(vector<int>(nums.begin() + 1, nums.end()));

        return max(max1, max2);
    }
};


