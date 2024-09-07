#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
        std::vector<std::vector<int>> res;
        std::sort(nums.begin(), nums.end());  // Sort the array
        
        for (int i = 0; i < nums.size(); ++i) {
            // Skip duplicate elements for `i`
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            
            int left = i + 1;
            int right = nums.size() - 1;
            
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                
                if (sum == 0) {
                    // Found a triplet
                    res.push_back({nums[i], nums[left], nums[right]});
                    
                    // Skip duplicates for `left` and `right`
                    while (left < right && nums[left] == nums[left + 1]) ++left;
                    while (left < right && nums[right] == nums[right - 1]) --right;
                    
                    // Move the pointers after finding a valid triplet
                    ++left;
                    --right;
                } else if (sum < 0) {
                    ++left;  // Need a larger sum, move the left pointer
                } else {
                    --right;  // Need a smaller sum, move the right pointer
                }
            }
        }
        
        return res;
    }
};
