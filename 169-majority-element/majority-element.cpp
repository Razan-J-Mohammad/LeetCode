class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int n=nums.size();
        int m=n/2;
        return nums[m];

    }
};