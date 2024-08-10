class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
       vector<uint64_t> dp(target + 1, 0);
        dp[0] = 1;

        for (int i = 1; i <= target; ++i) {
            for (int num : nums) {
                if (i >= num) {
                    dp[i] += dp[i - num];
                }
            }
        }
         if (dp[target] > INT_MAX) {
            return INT_MAX;
        }

        return dp[target];
      
    }
};