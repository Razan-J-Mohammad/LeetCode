class Solution {
public:
    int singleNumber(vector<int>& nums) {
    int result = 0; 
    sort(nums.begin(),nums.end());
    for (size_t i = 0; i < nums.size(); ++i) {  
        result ^= nums[i];  
    }
    return result; 
    }
};