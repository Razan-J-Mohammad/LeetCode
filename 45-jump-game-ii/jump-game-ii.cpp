
class Solution {
public:

    int jump(vector<int>& nums) {

      for(int i = 1; i < nums.size(); i++)
      {
        nums[i] = max(nums[i] + i, nums[i-1]);
      }

      int step = 0;
      int ans = 0;

      while(step < nums.size() - 1)
      {
        ans++;
        step = nums[step];
      }

      return ans;
    }
};
